#include <stdio.h>

int main(void)
{
	int a;
	
	printf("a=");
	scanf("%d", &a);
	
	if ((a <= 0) || (a > 100)){
		printf("a��0�ȉ��܂��͂P�O�O���傫�����ł�\n");
	}
	else {
		printf("a�͂P�O�O�ȉ��̎��R���ł�\n");
	}
	return (0);
}