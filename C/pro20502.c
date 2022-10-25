#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20], str2[20];
	
	printf("•¶Žš—ñ1=");
	scanf("%s", str1);
	printf("•¶Žš—ñ2=");
	scanf("%s", str2);
	
	printf(strlen(str1) == strlen(str2) ? "“¯‚¶’·‚³" : strlen(str1) > strlen(str2) ? "•¶Žš—ñ1" : "•¶Žš—ñ2");
	printf("‚Ì•û‚ª’·‚¢\n");
	
	return (0);
}