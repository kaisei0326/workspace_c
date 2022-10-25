#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int len;
	char *cp;
	
	printf("•¶Žš—ñ‚Ì’·‚³=");
	scanf("%d", &len);
	
	cp = (char *)calloc(len, sizeof(char));
	
	if (cp == NULL){
		printf("calloc‚ÉŽ¸”s‚µ‚Ü‚µ‚½\n");
	}
	else {
		printf("•¶Žš—ñ=");
		scanf("%s", cp);
		
		printf("•¶Žš—ñ=%s\n", cp);
		
		free(cp);
	}
	
	return (0);
}