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
	printf("整数=");
	scanf("%d", &a);
	
	printf("絶対値は%dです", abs(a));
	
	return(0);
}