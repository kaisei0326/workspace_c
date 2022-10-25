#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 20

int main(void)
{
	int n;
	char (*str)[MAX_LEN];
	int a;
	
	scanf("%d", &n);
	
	str = (char (*)[MAX_LEN])malloc(n * MAX_LEN * sizeof(char));
	
	if (str == NULL){
		printf("malloc‚ÉŽ¸”s‚µ‚Ü‚µ‚½\n");
	}
	else {
		for (a = 0; a < n; a++){
			printf("•¶Žš—ñ%d", a + 1);
			scanf("%s", str[a]);
		}
		for (a = 0; a < n; a++){
			printf("•¶Žš—ñ%d=%s\n", a + 1, str[a]);
		}
		free(str);
	}
	return (0);
}