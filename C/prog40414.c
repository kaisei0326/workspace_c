#include <stdio.h>

#define MAX n1 > n2 ? n1 : n2

int main(void)
{
	int n1, n2;
	
	printf("整数=");
	scanf("%d", &n1);
	printf("整数=");
	scanf("%d", &n2);
	
	printf("%dの方が大きいです\n", MAX);
	
	return (0);
}