#include<stdio.h>
int main(void)
{
	int a;
	printf("��������͂��Ă�������:");
	scanf("%d", &a);
	
	if(a == 0){
		printf("%d�͋����ł�", a);
	}
	else if(a % 2 == 0){
		printf("%d�͋����ł�", a);
	}
	else{
		printf("%d�͊�ł�", a);
	}
	return(0);
}