#include<stdio.h>
int main(void)
{
	int a, b;
	printf("����=");
	scanf("%d",&a);
	
	if(a % 2 == 0){
		printf("�����ł�\n");
	}
	else if(a % 2 == 1){
		printf("��ł�\n");
	}
	else{
		printf("����\n");
	}
	return(0);
}