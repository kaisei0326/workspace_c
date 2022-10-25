#include <stdio.h>

int main(void)
{
	unsigned int x;
	int b;
	
	printf("16進数=");
	scanf("%x", &x);
	
	printf("ビット位置=");
	scanf("%d", &b);
	
	printf("%xの%dビット目は%dです\n", x, b, (x & (1 << b)) ? 1 : 0);
	
	return (0);
}