#include <stdio.h>

void inp(char str1[10], char str2[10]);

int main(void)
{
	char s1[10];
	char s2[10];
	
	inp(s1, s2);
	
	printf("s1=%s\n", s1);
	printf("s2=%s\n", s2);
	
	return (0);
}

void inp(char str1[10], char str2[10])
{
	printf("•¶Žš—ñ1>> ");
	scanf("%s", str1);
	printf("•¶Žš—ñ2>> ");
	scanf("%s", str2);
}