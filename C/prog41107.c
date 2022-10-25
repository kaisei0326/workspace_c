#include <stdio.h>

int main(void)
{
	unsigned char c;
	
	for (c = 0x4f; c <= 0x58; c++){
		printf("%c", 0x82);
		printf("%c", c);
	}
	
	printf("\n");
	
	return (0);
}