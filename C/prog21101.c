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
	
	printf("整数1=");
	scanf("%d", &na);
	
	printf("整数2=");
	scanf("%d", &nb);
	
	printf("大きい方の値は%dです\n", maxof(na, nb));
	
	return 0;
}