#include<stdio.h>
int main(void)
{
	int a;
	
	printf("������");	scanf("%d", a);

	
	if((a % 2 == 0) && (a % 3 == 0)){
		printf("6�̔{���ł�\n");
	}
	else{
		printf("6�̔{���ł͂���܂���\n");
	}
	return(0);
}