#include<stdio.h>
int main(void)
{
	int a;
	printf("整数を入力してください:");
	scanf("%d", &a);
	
	if(a == 0){
		printf("%dは偶数です", a);
	}
	else if(a % 2 == 0){
		printf("%dは偶数です", a);
	}
	else{
		printf("%dは奇数です", a);
	}
	return(0);
}