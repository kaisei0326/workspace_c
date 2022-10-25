#include<stdio.h>

int main(void)
{
	int a;
	char str[100];
	
	printf("•¶š—ñ=");
	scanf("%s", str);
	
	a = 0;
	
	while(str[a] != '\0'){
		++a;
	}
	
	printf("ÅŒã‚Ì•¶š=%c", str[a - 1]);
	return(0);
}