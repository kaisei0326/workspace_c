#include<stdio.h>
int main(void)
{
	int a;
	printf("����=");
	scanf("%d", &a);
	if(a % 3 == 0){
		printf("%d�͂R�̔{���ł�\n");
	}
	else{
		printf("%d�͂R�̔{���ł͂���܂���\n");
	}
	return(0);
}