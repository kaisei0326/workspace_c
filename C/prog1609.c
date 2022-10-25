#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	
	if(a == b){
		printf("a‚Æb‚Ì·‚Ìâ‘Î’l‚Í0‚Å‚·\n");
	}
	else if(a > b){
	c = a - b;	
	printf("a‚Æb‚Ì·‚Ìâ‘Î’l‚Í%d‚Å‚·\n", c);
	}
	else if(a < b){
		c = b - a; 
 		printf("a‚Æb‚Ì·‚Ìâ‘Î’l‚Í%d‚Å‚·\n", c);
	}
	return(0);
}