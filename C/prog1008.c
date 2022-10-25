#include<stdio.h>
int main(void)
{
	float a, b, c;
	a = 12.3;
	b = 23.4;
	c = (a + b) / 2;
	
	printf("%.1f‚Æ%.1f‚Ì•½‹Ï‚Í%.1f‚Å‚·\n", a, b, c);
	return(0);
}