#include<stdio.h>
int main(void)
{
	int a, b;
	
	printf("�����l1=");
	scanf("%d", &a);
	
	printf("�����l2=");
	scanf("%d", &b);
	
	if(a == b){
		printf("2�̐��͓������ł�");
	}
	else if(a < b){
		printf("%d���%d�̂ق����傫���l�ł�", a, b);
	}
	else if(a > b){
		printf("%d���%d�̂ق����傫���l�ł�", b, a);
	}
	return(0);
}