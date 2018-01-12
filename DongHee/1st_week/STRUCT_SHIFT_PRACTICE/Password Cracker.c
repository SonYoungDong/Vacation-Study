#include <stdio.h>

int getData(int n);

typedef struct
{
	int arr[8];
} DATA;

unsigned char bits[20][8] = 
	{
		{0, 0, 0, 0, 0, 0, 0, 0},
	    {0, 0, 1, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 1, 1, 0},
		{1, 1, 1, 1, 1, 1, 1, 1},
		{0, 1, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 1, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 1, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 1, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 1},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 1, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 1, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{1, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 1, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 1, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0, 0, 0}
 	};
 	
int main()
{
	DATA data;
	int i, tmp;
	int temp = 0;
	
	for(i = 0; i < 3; i++)
	{
		tmp = getData(i);
		data.arr[i] = tmp;
		temp += tmp;
	}
	
	printf("%d", temp);
	return 0;
}

int getData(int n)
{
	int i;
	int a = n + n*10;
	int b = 0;
	int tmp = 0;
	
	for(i = a + 10; i >= a; i--, b++)
	{
		tmp += *(*bits + i) << b;
	} 
	
	return tmp;
}
