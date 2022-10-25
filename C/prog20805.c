#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[100];
	char str2[100];
	int len1, len2;
	
	printf("•¶Žš—ñ1=");
	scanf("%s", str1);
	printf("•¶Žš—ñ2=");
	scanf("%s", str2);
	
	len1 = strlen(str1);
	len2 = strlen(str2);
	
	
	if(len1 > len2){
		strcpy(str2, str1);
	}
	else if(len1 < len2){
		strcpy(str1, str2);
	}
	
	printf("•¶Žš—ñ1=%s\n•¶Žš—ñ2=%s\n", str1, str2);
	return 0;
}