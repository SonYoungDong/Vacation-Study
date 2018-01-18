#include <stdio.h>

union DATA
{
	char data_arr[4];
	float data;
};

int main(void)
{
	union DATA div;
	int i;
	
	div.data_arr[0] = 0xffffffc3;
	div.data_arr[1] = 0xfffffff5;
	div.data_arr[2] = 0x48;
	div.data_arr[3] = 0x40;
		
	printf("%.2f", div.data);
}
