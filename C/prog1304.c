#include<stdio.h>
int main(void)
{
	int a;
	
	printf("1����10�܂ł̐�������͂��Ă�������\n");
	scanf("%d", &a);
	
	if(a < 1){
		printf("�ԈႢ�ł�\n");
	}
	else if(a > 10){
		printf("�ԈႢ�ł�\n");
	}
	else{
		printf("�����ł�\n");
	}
	return(0);
}	