#include<stdio.h>
int main(void)
{
	int a, b;
	printf("���� �P=");
	scanf("%d", &a);
	
	printf("���� �Q=");
	scanf("%d", &b);
	
	if (a == b){
		printf("���̐�Βl�͂O�ł�\n");
	}
	else if (a < b){
		printf("���̐�Βl��%d�ł�\n", b - a);
	}
	else if (a > b){
		printf("���̐�Βl��%d�ł�\n", a - b);
	}
	return(0);
}