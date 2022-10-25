#include <stdio.h>

#define LOWER c >= 'A' && c <= 'Z' ? c + 32 : c

int main(void)
{
	char c;
	
	printf("•¶Žš>> ");
	scanf("%c", &c);
	
	printf("•ÏŠ·Œã=%c\n", LOWER);
	
	return (0);
}