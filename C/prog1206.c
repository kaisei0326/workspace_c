#include<stdio.h>
int main(void)
{
    int a;
	int b;
	int i;
	
	printf("a=");
	scanf("%d", &a);
	
	printf("b=");
	scanf("%d", &b);
	
	if(a > b){
		i = a - b;
	}
	else{
		i = b - a;
	}
	
	printf("a‚Æb‚Ì·‚Ìâ‘Î’l‚Í%d‚Å‚·", i);
	
	return(0);
}