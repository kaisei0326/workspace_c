#include<stdio.h>
int main(void)
{
	int a;
	printf("整数=");
	scanf("%d", &a);
	if(a % 3 == 0){
		printf("%dは３の倍数です\n");
	}
	else{
		printf("%dは３の倍数ではありません\n");
	}
	return(0);
}