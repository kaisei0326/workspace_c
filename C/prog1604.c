#include<stdio.h>
int main(void)
{
	float a, b, c;
	
	printf("数値１=");
	scanf("%f", &a);
	
	printf("数値２=");
	scanf("%f", &b);
	
	c = (a + b) / 2;
	
	printf("%.1fと%.1fの平均は%.1fです\n", a, b, c);
	return(0);
}