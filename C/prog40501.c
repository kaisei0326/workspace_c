#include <stdio.h>

int main(void)
{
	int i;
	
	printf("����=");
	scanf("%d", &i);
	
	i = (i > 0) ? i : i * (-1);
	
	printf("��Βl=%d\n", i);
	
	return (0);
}