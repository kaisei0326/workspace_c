#include <stdio.h>

int main(void)
{
	unsigned int x;
	int b;
	
	printf("16�i��=");
	scanf("%x", &x);
	
	printf("�r�b�g�ʒu=");
	scanf("%d", &b);
	
	printf("%x��%d�r�b�g�ڂ�%d�ł�\n", x, b, (x & (1 << b)) ? 1 : 0);
	
	return (0);
}