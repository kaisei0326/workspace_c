#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[100];
	char str2[100];
	char str3[100];
	
	printf("������P=");
	scanf("%s", str1);
	
	printf("������Q=");
	scanf("%s", str2);
	
	strcpy(str3, str1);
	strcpy(str1, str2);
	strcpy(str2, str3);
	
	printf("������P=%s\n", str1);
	printf("������Q=%s\n", str2);
	
	return 0;
}