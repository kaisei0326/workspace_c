#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20], str2[20];
	
	printf("文字列1=");
	scanf("%s", str1);
	printf("文字列2=");
	scanf("%s", str2);
	
	printf(strlen(str1) == strlen(str2) ? "同じ長さ" : strlen(str1) > strlen(str2) ? "文字列1" : "文字列2");
	printf("の方が長い\n");
	
	return (0);
}