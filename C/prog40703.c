#include <stdio.h>

int main(void)
{
	unsigned char uc;
	int i;
	unsigned char a1;
	
	printf("16進数=");
	scanf("%x", &uc);
	
	printf("ビット位置=");
	scanf("%d", &i);
	
	a1 = (1 << i);
	
	printf("%xの%dビット目を1にすると%xです", uc, i, uc | a1);
	
	return (0);
}