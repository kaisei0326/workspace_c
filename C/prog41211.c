#include <stdio.h>

int main(void)
{
	char str[200];
	int i;
	
	scanf("%s", str);
	
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			printf("%c", 0x82);
			printf("%c", str[i] + 0x1f);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			printf("%c", 0x82);
			printf("%c", str[i] + 0x1f);
			
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			printf("%c", 0x82);
			printf("%c", str[i] + 0x20);
		}
	}
	printf("\n");
	return (0);
}