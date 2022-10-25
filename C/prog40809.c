#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 20

int main(void)
{
	char (*c)[MAX_LEN];
	int a;
	int n;
	
	printf("•¶š—ñ”=");
	scanf("%d", &n);
	
	c = (char (*)[MAX_LEN])malloc(sizeof(char) * n * MAX_LEN);
	
	if (c == NULL){
		printf("malloc‚É¸”s‚µ‚Ü‚µ‚½\n");
	}
	else {
		for (a = 0; a < n; a++){
			printf("•¶š—ñ%d=", a++);
			scanf("%s", c[MAX_LEN][a]);
		}
	
		for (a = 0; a < n; a++){
			printf("•¶š—ñ%d=%s\n", a++, c[MAX_LEN][a]);
		}
		free(c);
	}
	return (0);
}