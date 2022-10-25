#include <stdio.h>

int main(void)
{
	unsigned char str[100];
	int i;
	
	printf("•¶Žš—ñ=");
	scanf("%s", str);
	
	for (i = 0; str[i] != '\0'; i++){
		printf("%2x", str[i]);
	}
	
	return (0);
}