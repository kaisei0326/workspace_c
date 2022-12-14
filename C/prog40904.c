#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 20

int main(void)
{
	char *str;
	int n, a;
	
	scanf("%d", &n);
	
	str = (char *)malloc(MAX_LEN * n * sizeof(char));
	
	if (str == NULL){
		printf("mallocに失敗しました");
	}
	else {
		for (a = 0; a < n; a++){
			printf("文字列%d=", a + 1);
			scanf("%s", str + a * MAX_LEN);
		}
		for (a = 0; a < n; a++){
			printf("文字列%d=%s\n", a + 1, str + a * MAX_LEN);
		}
		
		free(str);
	}
	
	return (0);
}