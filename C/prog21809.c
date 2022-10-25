#include<stdio.h>

int main(void)
{
	int i;
	int k=0;
	
	printf("®”=");
	scanf("%d", &i);
	
	do {
		i /= 10;
		k++;
	} while(i > 0);
	
	printf("Œ…”=%d\n", k);
	return(0);
}