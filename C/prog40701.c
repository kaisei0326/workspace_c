#include <stdio.h>

int main(void)
{
	int i;
	int j;
	
	printf("����=");
	scanf("%d", &i);
	
	j = (i << 2) + (i << 1);
	
	printf("%d��6�{��%d�ł�\n", i, j);
	
	return (0);
}