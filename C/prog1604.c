#include<stdio.h>
int main(void)
{
	float a, b, c;
	
	printf("���l�P=");
	scanf("%f", &a);
	
	printf("���l�Q=");
	scanf("%f", &b);
	
	c = (a + b) / 2;
	
	printf("%.1f��%.1f�̕��ς�%.1f�ł�\n", a, b, c);
	return(0);
}