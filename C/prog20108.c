#include<stdio.h>

int main(void)
{
	char c;
	printf("���� = ");
	scanf("%c", &c);
	
	if((c >= 'a') && (c <= 'z')){
		printf("�A���t�@�x�b�g\n");
	}
	else if((c >= 'A') && (c <= 'Z')){
		printf("�A���t�@�x�b�g\n");
	}
	else{
		printf("�A���t�@�x�b�g�ȊO\n");
	}
	return(0);
}