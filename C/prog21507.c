#include<stdio.h>

char str[20];

void str_input(void);

int main(void)
{
	str_input();
	
	printf("入力文字列=%s\n", str);
	
	return(0);
}

void str_input(void)
{
	printf("文字列=");
	scanf("%s", str);
}