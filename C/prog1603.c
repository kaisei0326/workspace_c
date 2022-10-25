#include<stdio.h>
int main(void)
{
	float a, b;
	printf("何インチですか=");
	scanf("%f", &a);
	b = a * 2.54;
	printf("%.2fインチは%.2fcmです\n", a ,b);
	return(0);
}