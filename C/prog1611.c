#include<stdio.h>
int main(void)
{
	float a, b;
	printf("a��b�Ŋ���܂�\n");
	printf("a=");
	scanf("%f", &a);
	printf("b=");
	scanf("%f", &b);
	
	printf("%f / %f = %f", a, b, a/b);
	return(0);
}