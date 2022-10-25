#include <stdio.h>

int main(void)
{
	char s[100];
	int i;
	scanf("%s", s);
	
	for (i = 0; s[i] != '\0'; i++){
		printf("%c", s[i]);
	}
	printf("\n");
	
	return (0);
}