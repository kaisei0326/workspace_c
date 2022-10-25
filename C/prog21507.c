#include<stdio.h>

char str[20];

void str_input(void);

int main(void)
{
	str_input();
	
	printf("“ü—Í•¶Žš—ñ=%s\n", str);
	
	return(0);
}

void str_input(void)
{
	printf("•¶Žš—ñ=");
	scanf("%s", str);
}