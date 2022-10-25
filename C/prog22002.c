#include<stdio.h>

int main(void)
{
	int x;
	int *p;
	
	p = &x;
	
	*p = 100;
	
	printf("xのアドレス=%d\n", &x);
	printf("のサイズ=%d\n", sizeof(x));
	printf("xの値=%d\n", x);
	
	return (0);
}