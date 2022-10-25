#include <stdio.h>

int main(void)
{
	char s[20];
	int a, b;
	int n;
	
	printf("文字列=");
	scanf("%s", s);
	
	b = 0;
	a = n = 0;
	
	while (s[a] != '\0'){
		if (s[a] < '0' || s[a] > '9'){
			b = 1;
			break;
		}
		n = n * 10 + s[a++] - '0';
	}
	if (b == 0){
		printf("10進数=%d\n", n);
	}
	else{
		printf("間違った文字列です\n");
	}
	return (0);
}