#include<stdio.h>

int main(void)
{
	int a;
	
	printf("��������͂��Ă������� : ");
	scanf("%d", &a);
	
	if(a % 3 == 0 && a != 0){
		printf("%d��3�̔{���ł�\n");
	}
	else{
		printf("%d��3�̔{���ł͂���܂���\n");
	}
	
	return(0);
}