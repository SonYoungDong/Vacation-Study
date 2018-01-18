#include <stdio.h>

typedef union
{
	float data;
	char byte[4];
} PIE;

int main()
{
	PIE pie;
	
	pie.data = 3.14;
	
	printf("%x\n%x\n%x\n%x", pie.byte[0], pie.byte[1], pie.byte[2], pie.byte[3]);
	
	return 0;
}
