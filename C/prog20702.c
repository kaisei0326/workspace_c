#include<stdio.h>

int main(void)
{
	char str1[100];
	char str2[100];
	int a, b;
	
	printf("文字列１=");
	scanf("%s", str1);
	a = 0;
	
	printf("文字列２=");
	scanf("%s", str2);
	b = 0;
	
	while(str1[a] != '\0'){
		a++;
	}
	while(str2[b] != '\0'){
		b++;
	}
	if(a == b){
		printf("同じ長さです\n");
	}
	else if(a < b){
		printf("文字列２の方が長いです");
	}
	else if(a > b){
		printf("文字列１の方が長いです");
	}
	
	return(0);
}