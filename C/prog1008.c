#include<stdio.h>
int main(void)
{
	float a, b, c;
	a = 12.3;
	b = 23.4;
	c = (a + b) / 2;
	
	printf("%.1fと%.1fの平均は%.1fです\n", a, b, c);
	return(0);
}