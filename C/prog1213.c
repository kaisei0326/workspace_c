#include<stdio.h>
int main(void)
{
	int a;
	printf("����=");
	scanf("%d", &a);
	
	if(a % 4 == 0){
		printf("���N�̓I�����s�b�N������܂�\n");
	}
	else{
		printf("���N�̓I�����s�b�N�͂���܂���\n");
	}
	return(0);
}