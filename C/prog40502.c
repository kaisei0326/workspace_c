#include <stdio.h>

int main(void)
{
	int i, j;
	
	printf("����=");
	scanf("%d", &i);
	
	printf("����=");
	scanf("%d", &j);
	
	printf("%d�̕����傫���ł�\n", i > j ? i : j);
	
	return (0);
}