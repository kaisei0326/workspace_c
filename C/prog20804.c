#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[100];
	char str2[100];
	
	printf("������1=");
	scanf("%s", str1);
	
	strcpy(str2, str1);
	printf("������2=%s\n", str2);
	return 0;
}