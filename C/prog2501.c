#include<stdio.h>
int main(void)
{
	int a;
	
	printf("����=");
	scanf("%d", &a);
	
	switch (a % 2){
	  case 0:
		printf("�����ł�\n");
		break;
		
	  case 1:
		printf("��ł�\n");
		break;
	}
	
	return(0);
}