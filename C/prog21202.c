#include<stdio.h>

int add(int x, int y)
{
	int a, b;
	b = 0;
	for(a = x;a <= y;a++){
		b += a;
	}
	return(b);
}

int main(void)
{
	int a, b;
	printf("®”1=");
	scanf("%d", &a);
	
	printf("®”2=");
	scanf("%d", &b);
	
	printf("‡Œv’l‚Í%d‚Å‚·\n", add(a, b));
	
	return(0);
}