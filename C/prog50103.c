#include <stdio.h>

int main(void)
{
	char str[5][20];
	int i;
	
	for (i = 0; i < 5; i++) {
		scanf("%s", str[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("%s\n", str[i]);
	}
	
	return (0);
}