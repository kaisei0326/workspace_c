#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[20];
	
	printf("文字列=");
	scanf("%s", s);
	
	printf("文字数=%d\n", strlen(s));
	
	return (0);
}