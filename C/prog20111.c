#include<stdio.h>

int main(void)
{
	char c;
	printf("¬•¶š : ");
	scanf("%c", &c);
	
	c -= 0x20;
	
	printf("%c", c);
	return(0);
}