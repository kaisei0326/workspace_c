#include<stdio.h>
int main(void)
{
	int a, b, c;
	
	printf("������1���ԉJ�ʂ���͂��Ă�������\n");
	printf("����(m/s)=");
	scanf("%d", &a);
	printf("�ꎞ�ԉJ��(mm)=");
	scanf("%d", &b);
	
	c = 0;
	
	if(a >= 25){
		printf("�\���x��\n");
		c = 1;
	}
	else if(a >= 15){
		printf("�������ӕ�\n");
		c = 1;
	}
	
	if(b >=60){
		printf("��J���ӕ�\n");
		c = 1;
	}
	else if(b >= 40){
		printf("��J���ӕ�\n");
		c = 1;
	}
	
	if(c = 0){
		printf("���ӕ�E�x��͂���܂���^n");
	}
	return(0);
}