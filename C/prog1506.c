#include<stdio.h>
int main(void)
{
	int a;
	
	printf("整数＝");
	scanf("%d", &a);
	
	if(!(a % 5 == 0)){
		printf("5で割り切れません\n");
	}
	else{
		printf("5で割り切れます\n");
	}
	return(0);
}