#include<stdio.h>

char str[20];

void str_input(void);

int main(void)
{
	str_input();
	
	printf("���͕�����=%s\n", str);
	
	return(0);
}

void str_input(void)
{
	printf("������=");
	scanf("%s", str);
}