#include<stdio.h>

int main(void)
{
	char str[100];
	int a, b, c;
	
	printf("文字列=");
	scanf("%s", str);
	
	a = 0;
	while(str[a] != '\0'){
		a++;
	}
	a--;
	c = 0;
	for(b = 0;b<=a;b++){
		if(str[b] != str[a]){
			c++;
		}
		a--;
	}
	if(c == 0){
		printf("回文です\n");
	}
	else{
		printf("回文ではありません\n");
	}
	return 0;
}