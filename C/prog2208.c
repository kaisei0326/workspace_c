#include <stdio.h>
int main(void)
{
	int x; /* ���͂��鐔�l*/
	int sum; /* ���v�l�v�Z�p�ϐ�*/
	
	sum = 0; /* ���v�l��0 �ɏ���������*/
	x = 1; /* x ��0 �łȂ��l�ɏ���������*/
	
	while (x != 0){ /* x ��0 �łȂ��ԌJ��Ԃ�*/
		printf("����="); /* ���l�̓���*/
		scanf("%d", &x);
		sum += x; /* ���v�l�̌v�Z*/	
	}
	printf("���v=%d\n", sum); /* ���v�l�̕\��*/
	return (0);
}