#include <stdio.h>

int main(void)
{
	int i, j;
	
	printf("®”=");
	scanf("%d", &i);
	
	printf("®”=");
	scanf("%d", &j);
	
	printf("%d‚Ì•û‚ª‘å‚«‚¢‚Å‚·\n", i > j ? i : j);
	
	return (0);
}