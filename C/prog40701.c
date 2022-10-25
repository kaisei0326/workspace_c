#include <stdio.h>

int main(void)
{
	int i;
	int j;
	
	printf("®”=");
	scanf("%d", &i);
	
	j = (i << 2) + (i << 1);
	
	printf("%d‚Ì6”{‚Í%d‚Å‚·\n", i, j);
	
	return (0);
}