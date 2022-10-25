#include<stdio.h>
int main(void)
{
	int a, b;
	printf("x=");
	scanf("%X", &a);
	printf("y=");
	scanf("%X", &b);
	
	printf("0x%X\n", a + b);
	return(0);
}