#include <stdio.h>

int main(void)
{
	int x, y;
	int z;
	int *p;
	int *q;
	
	printf("x=");
	scanf("%d", &x);
	printf("y=");
	scanf("%d", &y);
	
	p = &x;
	q = &y;
	
	z = *p;
	*p = *q;
	*q = z;
	
	printf("x=%d\n", x);
	printf("y=%d\n", y);
	
	return (0);
}