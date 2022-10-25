#include<stdio.h>
int main(void)
{
    int a, x, y;
	a = 9;
	x = a;
	a = a + 1;
	y = x * x + 2 * x + 3;
	printf("x=%d, y=%d\n", x, y);
	
	a = a + 1;
	x = a;
	y = x * x + 2 * x + 3;
	printf("x=%d, y=%d\n", x, y);
	
	return(0);
}