#include<stdio.h>
int main(void)
{
	int a;
	printf("���ɂ�=");
	scanf("%d", &a);
	
	if((a >= 1) && (a <= 5)){
		printf("�������Ԓ��ł�\n");
		}
	else if(a == 6){
		printf("�\�����ł�\n");
		}
	else if((a >= 7) && (a <= 9)){
		printf("�����ԋp���ł�\n");
		}
	else if((a >= 10) && (a <= 31)){
		printf("�ċx�݂ł�\n");
		}
	else{
		printf("�����i�{�j\n");
	}
		return(0);
}