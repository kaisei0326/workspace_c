#include<stdio.h>

int main(void)
{
	int a;
	printf("1~10�̐���=");
	scanf("%d", &a);
	
	if(a < 11 && a >= 1){
		printf("�����ł�\n");
	}
	else{
		printf("�ԈႢ�ł�\n");
	}
	return(0);
}