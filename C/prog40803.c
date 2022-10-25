#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int len;
	char *cp;
	
	printf("文字列の長さ=");
	scanf("%d", &len);
	
	cp = (char *)calloc(len, sizeof(char));
	
	if (cp == NULL){
		printf("callocに失敗しました\n");
	}
	else {
		printf("文字列=");
		scanf("%s", cp);
		
		printf("文字列=%s\n", cp);
		
		free(cp);
	}
	
	return (0);
}