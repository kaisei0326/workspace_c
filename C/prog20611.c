#include<stdio.h>

int main()
{
	char str1[100];
	char str2[100];                 //使わない
	int a, b, c;
	int k;                          //使わない
	
	a = 0;
	b = 0;
	c = 0;
	
	printf("文字列=");
	scanf("%s", str1);
	
	while(str1[a] != '\0'){
		a++;
	}
	--a;
	for(b = 0;b < a;++b){
		if(str1[a] != str1[b]){
			++c;
		}
		--a;
	}
	
/*	while(str2[b] != '\0'){
		for(k = a - 1;k >= 0;--k){
			str2[b] = str1[k];
			b++;
		}
	}  */
	
	if(c == 0){
		printf("回文です\n");
	}
	else {
		printf("回分ではありません\n");
	}
	
	return(0);
}