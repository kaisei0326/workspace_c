#include <stdio.h>

#define ODD_EVEN n % 2 == 0 ? "����" : "�"

int main(void)
{
	int n;
	printf("����>> ");
	scanf("%d", &n);
	
	printf(ODD_EVEN);
	return (0);
}