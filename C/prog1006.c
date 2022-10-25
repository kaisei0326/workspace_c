#include<stdio.h>
int main(void)
{
    int a, b, c;
	a = 10;
	b = 20;
	c = a;
	a = b;
	b = c;
	
	printf("a = %d, b = %d\n", a, b);
	return(0);
}