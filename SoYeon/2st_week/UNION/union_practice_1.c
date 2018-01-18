#include <stdio.h>

union DATA{
	float data;
	char data_arr[4];
};

int main(void)
{
	union DATA div;
	int i;
	
	div.data=3.14;	
	
	for(i=0; i<4; i++)
		printf("%x\n", div.data_arr[i]);
}
