#include<stdio.h>
int main(void)
{
	float a, b;
	printf("a‚ðb‚ÅŠ„‚è‚Ü‚·\n");
	printf("a=");
	scanf("%f", &a);
	printf("b=");
	scanf("%f", &b);
	
	printf("%f / %f = %f", a, b, a/b);
	return(0);
}