#include <stdio.h>

int main(void)
{
	int a;
	
	printf("a=");
	scanf("%d", &a);
	
	if ((0 < a) && (a <= 100)){
		printf("a�͂P�O�O�ȉ��̎��R���ł�\n");
	}
	else {
	printf("a�͕��܂��͂P�O�O���傫�����ł�\n");
	}
	return (0);
}