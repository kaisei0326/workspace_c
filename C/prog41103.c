#include <stdio.h>

typedef struct {
	int c1: 8;
	int c2: 8;
	int d : 15;
	int s : 1;
} INT_BIT;

int main(void)
{
	INT_BIT x;
	x.c1 = 100;
	x.c2 = 10;
	x.d = 256;
	x.s = 1;
	
	printf("c1=%d\n", x.c1);
	printf("c2=%d\n", x.c2);
	printf("d=%d\n", x.d);
	printf("s=%d\n", x.s);
	
	return (0);
}