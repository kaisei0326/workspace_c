#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LEN (20)

char *longer_string(char *str1, char *str2);

int main(void)
{
	char str1[MAX_STRING_LEN];
	char str2[MAX_STRING_LEN];
	char *longer;
	
	printf("文字列1=");
	scanf("%s", str1);
	
	printf("文字列2=");
	scanf("%s", str2);
	
	longer = longer_string(str1, str2);
	
	printf("長い文字列は%sです\n", longer);
	
	return (0);
}

char *longer_string(char *str1, char *str2)
{
	if (strlen(str1) > strlen(str2)){
		return (str1);
	}
	
	return (str2);
}