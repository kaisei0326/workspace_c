#include<stdio.h>

int main(void)
{
	char str1[100];
	char str2[100];
	int a, b;
	
	printf("������P=");
	scanf("%s", str1);
	a = 0;
	
	printf("������Q=");
	scanf("%s", str2);
	b = 0;
	
	while(str1[a] != '\0'){
		a++;
	}
	while(str2[b] != '\0'){
		b++;
	}
	if(a == b){
		printf("���������ł�\n");
	}
	else if(a < b){
		printf("������Q�̕��������ł�");
	}
	else if(a > b){
		printf("������P�̕��������ł�");
	}
	
	return(0);
}