#include<stdio.h>
int main(void)
{
	int a;
	
	printf("������");
	scanf("%d", &a);
	
	if(!(a % 5 == 0)){
		printf("5�Ŋ���؂�܂���\n");
	}
	else{
		printf("5�Ŋ���؂�܂�\n");
	}
	return(0);
}