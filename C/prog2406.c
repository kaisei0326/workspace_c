#include<stdio.h>
int main(void)
{
	int a, b;
	printf("整数=");
	scanf("%d",&a);
	
	if(a % 2 == 0){
		printf("偶数です\n");
	}
	else if(a % 2 == 1){
		printf("奇数です\n");
	}
	else{
		printf("死ね\n");
	}
	return(0);
}