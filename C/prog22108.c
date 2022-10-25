#include <stdio.h>

void koukan(int *p, int *q);

int main(void)
{
	int x;
	int y;
	
	printf("x=");
	scanf("%d", &x);
	printf("y=");
	scanf("%d", &y);
	
	koukan(&x, &y);
	
	printf("x=%d\n", x);
	printf("y=%d\n", y);
	
	return (0);
}

void koukan(int *p, int *q)
{
	int i;
	i = *p;
	*p = *q;
	*q = i;
}