#include<stdio.h>

int main(void)
{
	char str[100];
	int a = 0;

	printf("文字列=");
	scanf("%s", str);
	
	printf("文字コード=");
	
	do{
		printf("%2x ", str[a]);
	}while(str[a++] != '\0');
		
	return(0);
}