#include<stdio.h>
int main(void)
{
	int a;
	printf("１から１０までの整数を入力してください\n");
	scanf("%d", &a);
	
	if((a < 11) && (a > 0)){
		printf("正解です\n");
	}
	else{
		printf("間違いです\n");
	}
	return(0);
}