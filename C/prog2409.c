#include<stdio.h>
int main(void)
{
	int a, b, c;
	
	printf("x=");
	scanf("%d", &a);
	
	c = 0;
	for (b = 1; b <= a; b++){
		c += b;
	}
	printf("1‚©‚ç%d‚Ü‚Å‚Ì‡Œv‚Í%d‚Å‚·\n", b - 1, c);
	return(0);
}