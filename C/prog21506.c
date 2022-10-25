#include<stdio.h>

int a;

int main(void)
{
	int b;
	int c;
	static int d;
	
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
	
	return(0);
}
