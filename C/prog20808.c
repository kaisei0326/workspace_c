#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[100];
	char str2[100];
	
	printf("������P=");
	scanf("%s", str1);
	
	printf("������Q=");
	scanf("%s", str2);
	
	strcat(str1, str2);
	
	printf("%s\n", str1);
	return 0;
}