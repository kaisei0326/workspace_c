#include<stdio.h>

int main(void)
{
	int kirobait, byte, bit;
	printf("�L���o�C�g=");
	scanf("%d", &kirobait);
	
	byte = kirobait * 1024;
	bit = kirobait * 1024 * 8;
	
	
	
	printf("%d�o�C�g\n", byte);
	printf("%d�r�b�g\n", bit);
	return (0);
}