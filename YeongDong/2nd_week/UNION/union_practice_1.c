#include <stdio.h>
union Hexadecimal
{
	float data1;
	char data2[4];
};

int main(void)
{
	union Hexadecimal pie;	
	pie.data1 = 3.14;
	printf("%x %x %x %x", pie.data2[0], pie.data2[1], pie.data2[2], pie.data2[3]);
	return 0;	
}
