#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[100];
	char str2[100];
	
	printf("������P=");
	scanf("%s", str1);
	
	strcat(str2, "<<<");
	strcat(str2, str1);
	strcat(str2, ">>>");
	
	printf("������Q=%s\n", str2);
	
	return 0;
}