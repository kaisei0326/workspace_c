#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[100];
	char str2[100];
	char str3[100];
	char str4[100];
	
	printf("������P=");
	scanf("%s", str1);
	
	printf("������Q=");
	scanf("%s", str2);
	
	printf("������R=");
	scanf("%s", str3);
	
	str4[0] = '\0';
	
	strncat(str4, str1, 3);
	strncat(str4, str2, 3);
	strncat(str4, str3, 3);
	
	printf("������S=%s", str4);
	
	return 0;
}