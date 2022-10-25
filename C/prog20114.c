#include<stdio.h>

int main(void)
{
	int a, b, x;
	printf("x=");
	scanf("%d", &x);
	b = 0;
	for(a = 0;a <= x; a++){
		b += a;
	}
	printf("%d\n", b);
	return(0);
}