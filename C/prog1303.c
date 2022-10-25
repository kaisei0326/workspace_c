#include<stdio.h>
int main(void)
{
	int a, b;
	
	printf("整数値1=");
	scanf("%d", &a);
	
	printf("整数値2=");
	scanf("%d", &b);
	
	if(a == b){
		printf("2つの数は同じ数です");
	}
	else if(a < b){
		printf("%dより%dのほうが大きい値です", a, b);
	}
	else if(a > b){
		printf("%dより%dのほうが大きい値です", b, a);
	}
	return(0);
}