#include<stdio.h>

int main(void)
{
	int a;
	
	printf("整数を入力してください:");
	scanf("%d", &a);
	
	if((a  % 2) == 0){
	   printf("%dは偶数です\n");
	}
	else{
	    printf("%dは奇数です\n");
	}
		return(0);
}
		