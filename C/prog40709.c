#include <stdio.h>
int main(void)
{
	int i, j;
	
	printf("���=");
	scanf("%d", &i);
	printf("����=");
	scanf("%d", &j);
	
	printf("%.1f\n", (float)(i * j) / 2);
	
	return (0);
}