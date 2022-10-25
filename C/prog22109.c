#include <stdio.h>

void keisan(int x, int y, int *wa, int *sa);

int main(void)
{
	int x;
	int y;
	int wa;
	int sa;
	
	printf("x=");
	scanf("%d", &x);
	printf("y=");
	scanf("%d", &y);
	
	keisan(x, y, &wa, &sa);
	
	printf("x+y=%d\n", wa);
	printf("x-y=%d\n", sa);
	
	return (0);
}

void keisan(int x, int y, int *wa, int *sa)
{
	*wa = x + y;
	*sa = x - y;
}