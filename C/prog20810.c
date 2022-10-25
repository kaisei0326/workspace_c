#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[100];
	char str2[100];
	
	printf("•¶Žš—ñ‚P=");
	scanf("%s", str1);
	
	strcat(str2, "<<<");
	strcat(str2, str1);
	strcat(str2, ">>>");
	
	printf("•¶Žš—ñ‚Q=%s\n", str2);
	
	return 0;
}