#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	char *p;
	
	printf("文字列の長さ=");
	scanf("%d", &n);
	
	p = (char *)malloc(n * sizeof(char));
	
	if (p == NULL){
		printf("mallocに失敗しました\n");
	}
	else {
		printf("文字列=");
		scanf("%s", p);
		
		printf("文字列=%s\n", p);
		
		free(p);
	}
	
	return (0);
}