#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 20

int main(void)
{
	int i;
	int n;
	char *str[20];
	
	printf("•¶š—ñ”=");
	scanf("%d", &n);
	
	str = (char *)malloc(n * MAX_LEN * sizeof(char));
	
	if (str == NULL){
		printf("malloc‚É¸”s‚µ‚Ü‚µ‚½\n");
	}
	else {
		for (i = 0; i < n; i++){
			printf("•¶š—ñ%d=", i++);
			scanf("%s", str[i]);
		}
		