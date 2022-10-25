#include <stdio.h>

int main(void)
{
	unsigned char uc;
	unsigned char a1, a2;
	
	printf("16i”=");
	scanf("%x", &uc);
	
	a1 = uc << 4;
	a2 = uc >> 4;
	a1 += a2;
	
	printf("%x\n", a1);
	
	return (0);
}