#include<stdio.h>
int main(void)
{
	int a;
	
	printf("整数＝");	scanf("%d", a);

	
	if((a % 2 == 0) && (a % 3 == 0)){
		printf("6の倍数です\n");
	}
	else{
		printf("6の倍数ではありません\n");
	}
	return(0);
}