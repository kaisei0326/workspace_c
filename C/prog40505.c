#include <stdio.h>

int main(void)
{
	int i;
	
	printf("®”=");
	scanf("%d", &i);
	
	printf(i % 2 == 0 ? "‹ô”\n" : "Šï”\n");
	
	return (0);
}