#include<stdio.h>

int main(void)
{
	char str[100];
	int a = 0;

	printf("������=");
	scanf("%s", str);
	
	printf("�����R�[�h=");
	
	do{
		printf("%2x ", str[a]);
	}while(str[a++] != '\0');
		
	return(0);
}