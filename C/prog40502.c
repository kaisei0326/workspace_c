#include <stdio.h>

int main(void)
{
	int i, j;
	
	printf("整数=");
	scanf("%d", &i);
	
	printf("整数=");
	scanf("%d", &j);
	
	printf("%dの方が大きいです\n", i > j ? i : j);
	
	return (0);
}