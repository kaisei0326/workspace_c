#include<stdio.h>

int abs(int x)
{
	if(x < 0){
		x *= -1;
	}
	return(x);
}

int main(void)
{
	int a;
	printf("®”=");
	scanf("%d", &a);
	
	printf("â‘Î’l‚Í%d‚Å‚·", abs(a));
	
	return(0);
}