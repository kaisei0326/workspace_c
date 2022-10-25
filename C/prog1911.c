#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("x=");
	scanf("%d", &a);
	c = 0;
	for(b=1;b<=a;b++){
		c = c + b;
	}
	printf("%d\n", c);
	return(0);
}