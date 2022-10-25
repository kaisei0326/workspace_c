#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("x1=");
	scanf("%x", &a);
	printf("x2=");
	scanf("%x", &b);
	printf("%X + %X = %X", a, b, a+b);
	return(0);
}