#include<stdio.h>

int main()
{
	char str[100];
	int a;
	int b;
	
	printf("文字列=");
	scanf("%s", str);
	
	a = 0;
	b = 0;
	while(str[a] != '\0'){
		if(b <= str[a]){
			b = str[a];
		}
		a++;
	}
	printf("最大の数字=%c\n", b);
	return(0);
}