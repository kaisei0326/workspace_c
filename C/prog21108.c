#include<stdio.h>

float heikin(int n1,int n2, int n3)
{
	return((n1 + n2 + n3) / 3.0);
}

int main(void)
{
	int a, b, c;
	
	printf("®”1=");
	scanf("%d", &a);
	printf("®”2=");
	scanf("%d", &b);
	printf("®”3=");
	scanf("%d", &c);
	
	printf("•½‹Ï’l‚Í%.2f‚Å‚·\n", heikin(a, b, c));
	
	return(0);
}