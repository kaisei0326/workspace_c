#include<stdio.h>

int add(int x, int y)
{
	return(x + y);
}

int main(void)
{
	int a, b;
	printf("®”1=");
	scanf("%d", &a);
	
	printf("®”2=");
	scanf("%d", &b);
	
	printf("‡Œv’l‚Í%d‚Å‚·\n", add(a, b));
	
	return 0;
}