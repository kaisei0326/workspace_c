#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	char *p;
	
	printf("•¶Žš—ñ‚Ì’·‚³=");
	scanf("%d", &n);
	
	p = (char *)malloc(n * sizeof(char));
	
	if (p == NULL){
		printf("malloc‚ÉŽ¸”s‚µ‚Ü‚µ‚½\n");
	}
	else {
		printf("•¶Žš—ñ=");
		scanf("%s", p);
		
		printf("•¶Žš—ñ=%s\n", p);
		
		free(p);
	}
	
	return (0);
}