#include<stdio.h>
int main(void)
{
	int a;
	
	printf("1から10までの整数を入力してください\n");
	scanf("%d", &a);
	
	if(a < 1){
		printf("間違いです\n");
	}
	else if(a > 10){
		printf("間違いです\n");
	}
	else{
		printf("正解です\n");
	}
	return(0);
}	