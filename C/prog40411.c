#include<stdio.h>

int main(void)
{
	char c;
	
	printf("文字=");
	scanf("%c", &c);
	
	printf("変換後=%c\n", c >= 'A' && c <= 'Z' ? c + 32 : c);
	
	return (0);
}