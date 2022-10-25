#include<stdio.h>

int main(void)
{
	int i;
	int *p;
	char c;
	char *q;
	
	p = &i;
	q = &c;
	
	*p = 10;
	*q = 'A';
	
	printf("i=%d\n", i);
	printf("c=%c\n", c);
	
	return (0);
}