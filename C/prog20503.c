#include<stdio.h>

int main(void)
{
	int a;
	char str[100];
	
	printf("文字列=");
	scanf("%s", str);
	
	a = 0;
	
	while(str[a] != '\0'){
		++a;
	}
	
	printf("最後の文字=%c", str[a - 1]);
	return(0);
}