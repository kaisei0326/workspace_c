#include<stdio.h>

int main(void)
{
	char str[100];
	int a = 0;

	printf("•¶š—ñ=");
	scanf("%s", str);
	
	printf("•¶šƒR[ƒh=");
	
	do{
		printf("%2x ", str[a]);
	}while(str[a++] != '\0');
		
	return(0);
}