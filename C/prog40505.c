#include <stdio.h>

int main(void)
{
	int i;
	
	printf("����=");
	scanf("%d", &i);
	
	printf(i % 2 == 0 ? "����\n" : "�\n");
	
	return (0);
}