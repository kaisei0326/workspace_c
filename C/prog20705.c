#include<stdio.h>

int main(void)
{
	char str1[100];
	char str2[100];
	
	
	printf("������1=");
	scanf("%s", str1);
	
	printf("������2=");
	scanf("%s", str2);
	
	printf("������3=%s%s", str1, str2);
	return(0);
}