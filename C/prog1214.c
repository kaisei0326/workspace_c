#include<stdio.h>
int main(void)
{
	int a;
	printf("����=");
	scanf("%d", &a);
	
	if(a % 400 == 0){
		printf("���N�͂��邤�N�ł�");
	}
	else if(a % 100 == 0){
		printf("���Ƃ��͂��邤�N�ł͂���܂���");
	}
	else if(a % 4 == 0){
		printf("���N�͂��邤�N�ł�");
	}
	else{
		printf("���Ƃ��͂��邤�N�ł͂���܂���");
	}
	return(0);
}