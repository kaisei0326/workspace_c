#include<stdio.h>

int main(void)
{
	int a;
	printf("1~10の整数=");
	scanf("%d", &a);
	
	if(a < 11 && a >= 1){
		printf("正解です\n");
	}
	else{
		printf("間違いです\n");
	}
	return(0);
}