#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[100];
	char str2[100];
	int len1, len2;
	
	printf("文字列1=");
	scanf("%s", str1);
	
	printf("文字列2=");
	scanf("%s", str2);
	
	len1 = strlen(str1);
	len2 = strlen(str2);
	
	if(len1 == len2){
		printf("長さは同じです\n");
	}
	else if(len1 > len2){
		printf("文字列1の方が長いです\n");
	}
	else if(len1 < len2){
		printf("文字列2の方が長いです\n");
	}
	return(0);
}