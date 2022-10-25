#include <stdio.h>

void round(int *x);

int main(void)
{
	int x;
	
	printf("®”=");
	scanf("%d", &x);
	
	round(&x);
	
	printf("lÌŒÜ“ü=%d\n", x);
	
	return (0);
}

void round(int *x)
{
	*x =  (*x + 5) / 10 * 10;
}