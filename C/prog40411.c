#include<stdio.h>

int main(void)
{
	char c;
	
	printf("����=");
	scanf("%c", &c);
	
	printf("�ϊ���=%c\n", c >= 'A' && c <= 'Z' ? c + 32 : c);
	
	return (0);
}