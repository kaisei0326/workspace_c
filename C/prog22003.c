#include<stdio.h>

int main(void)
{
	int x, y;
	int *p;
	
	p = &x;

	printf("x=");
	scanf("%d", &x);
	
	y = *p;
	
	printf("y=%d\n", y);
	
	return (0);
}