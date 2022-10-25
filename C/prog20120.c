#include<stdio.h>

int main(void)
{
	int kirobait, byte, bit;
	printf("キロバイト=");
	scanf("%d", &kirobait);
	
	byte = kirobait * 1024;
	bit = kirobait * 1024 * 8;
	
	
	
	printf("%dバイト\n", byte);
	printf("%dビット\n", bit);
	return (0);
}