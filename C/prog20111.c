#include<stdio.h>

int main(void)
{
	char c;
	printf("������ : ");
	scanf("%c", &c);
	
	c -= 0x20;
	
	printf("%c", c);
	return(0);
}