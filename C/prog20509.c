#include<stdio.h>

int main()
{
	char str1[100];
	char str2[100];
	int a, b;
	
	printf("文字列１=");
	scanf("%s", str1);
	
	printf("文字列２=");
	scanf("%s", str2);
	
	a = 0;
	b = 0;
	
	while(str1[a] != '\0'){
		a++;
	}
	while(str2[b] != '\0'){
		b++;
	}
	if(a == b){
		printf("文字列の長さは同じです\n");
	}
	else if(a > b){
		printf("文字列が多いのは%sです", str1);
	}
	else if(a < b){
		printf("文字列が多いのは%sです", str2);
	}
	return(0);
}