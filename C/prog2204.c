#include <stdio.h>

int main(void)
{
	int i;              //�J��Ԃ��̕ϐ�
	int sum;            //���v���o�����߂̕ϐ�
	
	sum = 0;
	for (i = 1; i <= 10; i++){       //10��J��Ԃ�
		sum += i;
	}
	printf("1����10�܂ł̍��v��%d�ł�\n", sum); //����
	return (0);
}