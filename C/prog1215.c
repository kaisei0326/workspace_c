#include<stdio.h>
int main(void)
{
	int a;
	printf("整数=");
	scanf("%d", &a);
	
	if((a % 2 == 0) && (a % 3 == 0)){
		printf("６の倍数です");
	}
	else{
		printf("６の倍数ではありません");
	}
	return(0);
}