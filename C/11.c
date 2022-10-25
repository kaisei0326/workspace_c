#include<stdio.h>

int main(void)
{
	int a, b=0, c;
	printf("x=");
	scanf("%d", &c);
	for(a = 1;a<= c;a++){
		b += a;
	}
	printf("1‚©‚ç%d‚Ü‚Å‚Ì‡Œv‚Í%d‚Å‚·\n", c, b);
	return 0;
}