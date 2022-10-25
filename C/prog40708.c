#include <stdio.h>

int main(void)
{
	int i, j;
	float f;
	
	printf("®”1=");
	scanf("%d", &i);
	
	printf("®”2=");
	scanf("%d", &j);
	
	f = ((float)i + (float)j) / 2;
	
	printf("•½‹Ï=%.1f\n", f);
	
	return (0);
}