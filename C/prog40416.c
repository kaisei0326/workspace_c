#include <stdio.h>

#define LOWER c >= 'A' && c <= 'Z' ? c + 32 : c

int main(void)
{
	char c;
	
	printf("����>> ");
	scanf("%c", &c);
	
	printf("�ϊ���=%c\n", LOWER);
	
	return (0);
}