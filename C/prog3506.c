#include <stdio.h>

int main(void)
{
    int num;

    printf("�P����P�O�܂ł̐���=");
	scanf("%d", &num);

    if ((num >= 1) && (num <= 10)){
		printf("�����ł�\n");
    }
	else {
		printf("�ԈႢ�ł�\n");
	}

	return (0);
}
