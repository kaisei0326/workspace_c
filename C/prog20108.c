#include<stdio.h>

int main(void)
{
	char c;
	printf("文字 = ");
	scanf("%c", &c);
	
	if((c >= 'a') && (c <= 'z')){
		printf("アルファベット\n");
	}
	else if((c >= 'A') && (c <= 'Z')){
		printf("アルファベット\n");
	}
	else{
		printf("アルファベット以外\n");
	}
	return(0);
}