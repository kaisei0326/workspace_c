#include <stdio.h>

#define LOWER c >= 'A' && c <= 'Z' ? c + 32 : c

int main(void)
{
	char c;
	
	printf("文字>> ");
	scanf("%c", &c);
	
	printf("変換後=%c\n", LOWER);
	
	return (0);
}