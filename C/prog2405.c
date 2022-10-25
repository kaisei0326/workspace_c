#include<stdio.h>
int main(void)
{
	float a, b;
	
	printf("x=");
	scanf("%f", &a);
	
	printf("y=");
	scanf("%f", &b);
	
	printf("x+y=%f", a + b);
	
	return (0);
}