#include <stdio.h>

#define MAX n1 > n2 ? n1 : n2

int main(void)
{
	int n1, n2;
	
	printf("����=");
	scanf("%d", &n1);
	printf("����=");
	scanf("%d", &n2);
	
	printf("%d�̕����傫���ł�\n", MAX);
	
	return (0);
}