#include<stdio.h>

int min(int x, int y)
{
	if(x < y){
		return(x);
	}
	else{
		return(y);
	}
}

int main(void)
{
	int a, b;
	
	printf("整数1=");
	scanf("%d", &a);
	
	printf("整数2=");
	scanf("%d", &b);
	
	printf("小さい方の値は%dです\n", min(a, b));
	
	return(0);
}