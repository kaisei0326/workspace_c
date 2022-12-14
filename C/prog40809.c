#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 20

int main(void)
{
	char (*c)[MAX_LEN];
	int a;
	int n;
	
	printf("文字列数=");
	scanf("%d", &n);
	
	c = (char (*)[MAX_LEN])malloc(sizeof(char) * n * MAX_LEN);
	
	if (c == NULL){
		printf("mallocに失敗しました\n");
	}
	else {
		for (a = 0; a < n; a++){
			printf("文字列%d=", a++);
			scanf("%s", c[MAX_LEN][a]);
		}
	
		for (a = 0; a < n; a++){
			printf("文字列%d=%s\n", a++, c[MAX_LEN][a]);
		}
		free(c);
	}
	return (0);
}