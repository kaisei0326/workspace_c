#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 20

int main(void)
{
	int i;
	int n;
	char *str[20];
	
	printf("文字列数=");
	scanf("%d", &n);
	
	str = (char *)malloc(n * MAX_LEN * sizeof(char));
	
	if (str == NULL){
		printf("mallocに失敗しました\n");
	}
	else {
		for (i = 0; i < n; i++){
			printf("文字列%d=", i++);
			scanf("%s", str[i]);
		}
		