#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[100];
	int len;
	
	printf("•¶Žš—ñ=");
	scanf("%s", str);
	
	for(len = strlen(str) -1;len >= 0;len--){
		printf("%c", str[len]);
	}
	
	printf("\n");
	return(0);
}