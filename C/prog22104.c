#include <stdio.h>

int nyuuryoku(void);

int main(void)
{
	int i;

	i = nyuuryoku();

	printf("i=%d\n", i);

	return (0);
}

int nyuuryoku(void)
{
	int x;
	printf("®”=");
	scanf("%d", &x);

	return (x);
}