#include<stdio.h>

int main(void)
{
	char str1[100];
	char str2[100];
	
	int a, b, c;
	a = 0;
	c = 0;
	
	
	printf("������=");
	scanf("%s", str1);
	
	while(str1[a] != '\0'){
		a++;
	}
	a--;
	
	while(a >= 0){
		str2[c] = str1[a];
		--a;
		++c;
	}
	
	str2[c] = '\0';
	
	printf("���]������=%s\n", str2);
}