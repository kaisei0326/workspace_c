#include<stdio.h>

int main(void)
{
	int i;
	printf("����=");
	scanf("%d", &i);
	
	if(i % 400 == 0){
		printf("���邤�N�ł�\n");
	}
	else if(i % 100 == 0){
		printf("���邤�N�ł͂���܂���\n");
	}
	else if(i % 4 == 0){
		printf("���邤�N�ł�\n");
	}
	else{
		printf("���邤�N�ł͂���܂���\n");
	}
	return(0);
}