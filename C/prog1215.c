#include<stdio.h>
int main(void)
{
	int a;
	printf("����=");
	scanf("%d", &a);
	
	if((a % 2 == 0) && (a % 3 == 0)){
		printf("�U�̔{���ł�");
	}
	else{
		printf("�U�̔{���ł͂���܂���");
	}
	return(0);
}