#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[100];
	char str2[100];
	int len1, len2;
	
	printf("������1=");
	scanf("%s", str1);
	
	printf("������2=");
	scanf("%s", str2);
	
	len1 = strlen(str1);
	len2 = strlen(str2);
	
	if(len1 == len2){
		printf("�����͓����ł�\n");
	}
	else if(len1 > len2){
		printf("������1�̕��������ł�\n");
	}
	else if(len1 < len2){
		printf("������2�̕��������ł�\n");
	}
	return(0);
}