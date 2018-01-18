#include <stdio.h>

typedef union
{
	float data;
	char byte[4];
} PIE;

int main()
{
	PIE pie;
	
	pie.byte[0] = 0xffffffc3;
	pie.byte[1] = 0xfffffff5;
	pie.byte[2] = 0x48;
	pie.byte[3] = 0x40;
	
	printf("%.2f", pie.data);
	
	return 0;
}
