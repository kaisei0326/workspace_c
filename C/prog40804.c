#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *i, *j;
	
	i = (int *)malloc(sizeof(int));
	j = (int *)malloc(sizeof(int));
	
	if (i == NULL || j == NULL){
		printf("malloc‚É¸”s‚µ‚Ü‚µ‚½\n");
	}
	else {
		printf("®”1=");
		scanf("%d", i);
		printf("®”2=");
		scanf("%d", j);
		
		printf("®”1=%d\n", *i);
		printf("®”2=%d\n", *j);
		
		free(i);
		free(j);
	}
	return (0);
}