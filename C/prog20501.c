#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[30];
	int len;
	
	printf("文字列>> ");
	scanf("%s", str);
	
	len = strlen(str);
	
	printf("文字列[%s]の長さは[%d]です。\n", str, len);
	
	return (0);
}