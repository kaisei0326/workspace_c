#include <stdio.h>

#define DIFFERENCE n1 < n2 ? n2 - n1 : n1 - n2

int main(void)
{
	int n1, n2;
	
	printf("����=");
	scanf("%d", &n1);
	printf("����=");
	scanf("%d", &n2);
	
	printf("���̐�Βl��%d�ł�\n", DIFFERENCE);
	
	return (0);
}