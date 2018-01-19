#include <stdio.h>
union Hexadecimal
{
	float data1;
	char data2[4];
};

int main(void)
{
	union Hexadecimal pie;	
	pie.data2[0] = 0xffffffc3;
	pie.data2[1] = 0xfffffff5;
	pie.data2[2] = 0x48;
	pie.data2[3] = 0x40;
	printf("%1.2f", pie.data1);
	return 0;	
}

