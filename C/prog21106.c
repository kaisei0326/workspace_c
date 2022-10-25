#include<stdio.h>

int max3(int x, int y, int z)
{
	if(x > y && x > z){
		return(x);
	}
	else if(y > x && y > z){
		return(y);
	}
	else{
		return(z);
	}
}

int main(void)
{
	int a, b, c;
	
	printf("®”1=");
	scanf("%d", &a);
	printf("®”2=");
	scanf("%d", &b);
	printf("®”3=");
	scanf("%d", &c);
	
	printf("Å‚à‘å‚«‚¢’l‚Í%d‚Å‚·\n", max3(a, b, c));
	
	return (0);
}