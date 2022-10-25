#include<stdio.h>

int x, y, z;

void add(void);

int main(void)
{
	printf("®” 1=");
	scanf("%d", &x);
	printf("®” 2=");
	scanf("%d", &y);
	
	add();
	
	printf("%d + %d = %d\n", x, y, z);
	
	return(0);
}

void add(void)
{
	z = x + y;
}