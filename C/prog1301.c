#include<stdio.h>

int main(void)
{
	int a;
	
	printf("整数を入力してください : ");
	scanf("%d", &a);
	
	if(a % 3 == 0 && a != 0){
		printf("%dは3の倍数です\n");
	}
	else{
		printf("%dは3の倍数ではありません\n");
	}
	
	return(0);
}