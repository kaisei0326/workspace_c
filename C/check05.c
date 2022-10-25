#include <stdio.h>

int main(void)
{
	char s[100];
	int i, j = 0;
	
	scanf("%s", s);
	
	for (i = 0; s[i] != '\0'; i++){
		j++;
	}
	
	printf("%d\n", j);

	return (0);
}