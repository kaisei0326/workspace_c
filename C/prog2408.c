#include<stdio.h>
int main(void)
{
	int a;
	printf("年齢=");
	scanf("%d", &a);
	
	if((a <= 12) && (a >= 7)){
		printf("小学生です\n");
	}
	else{
		printf("小学生ではありません\n");
	}
	return(0);
}