#include<stdio.h>

int main(void)
{
	char c;
	
	printf("•¶Žš=");
	scanf("%c", &c);
	
	printf("•ÏŠ·Œã=%c\n", c >= 'A' && c <= 'Z' ? c + 32 : c);
	
	return (0);
}