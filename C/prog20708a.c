#include <stdio.h>

int main(void){
	char str[100];
	char str2[100];
	
	int a, b, c;
	a = 0;
	b = 0;
	c = 0;
	
	printf("������");
	scanf("%s", str1);
	
	while(str1[a] != '\0'){
		++a;
	}
	--a;
	while(a >= 0){
		str2[b] = str1[a];
		if(str1[b] != str2[b]){
			++c;
		}
		--a;
		++b;
		
	}
	if(c == 0){
		printf("�񕶂ł�\n");
	}
	else{
		printf("�񕶂ł͂���܂���\n");
	}
	
	
	return 0;
}