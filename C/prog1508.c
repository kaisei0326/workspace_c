#include<stdio.h>
int main(void)
{
	int a;
	
	printf("�_����");
	scanf("%d", &a);
	
	if((a >= 60) && (a <= 100)){
		printf("���i�ł�\n");
	}
	else{
		printf("�ԓ_�ł�\n");
	}
	return(0);
}