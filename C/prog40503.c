#include <stdio.h>

int main(void)
{
	int i, j;
	
	printf("����=");
	scanf("%d", &i);
	printf("����=");
	scanf("%d", &j);
	
	printf("���̐�Βl��%d�ł�\n", i > j ? i - j : j - i);
	
	return (0);
}