#include<stdio.h>

int maxof(int x, int y)
{
	if(x > y){
		return(x);
	}
	else{
		return(y);
	}
}

int main(void)
{
	int na;
	int nb;
	
	printf("®”1=");
	scanf("%d", &na);
	
	printf("®”2=");
	scanf("%d", &nb);
	
	printf("‘å‚«‚¢•û‚Ì’l‚Í%d‚Å‚·\n", maxof(na, nb));
	
	return 0;
}