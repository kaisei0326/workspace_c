#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[30];
	int len;
	
	printf("������>> ");
	scanf("%s", str);
	
	len = strlen(str);
	
	printf("������[%s]�̒�����[%d]�ł��B\n", str, len);
	
	return (0);
}