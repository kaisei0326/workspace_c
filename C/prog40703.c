#include <stdio.h>

int main(void)
{
	unsigned char uc;
	int i;
	unsigned char a1;
	
	printf("16�i��=");
	scanf("%x", &uc);
	
	printf("�r�b�g�ʒu=");
	scanf("%d", &i);
	
	a1 = (1 << i);
	
	printf("%x��%d�r�b�g�ڂ�1�ɂ����%x�ł�", uc, i, uc | a1);
	
	return (0);
}