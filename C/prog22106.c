#include <stdio.h>

void nyuuryoku(int *x);

int main(void)
{
	int i;
	
	nyuuryoku(&i);
	
	printf("i=%d\n", i);
	
	return (0);
}

void nyuuryoku(int *x)
{
	printf("®”=");
	scanf("%d", x);
}