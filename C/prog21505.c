#include<stdio.h>

int a = 0;

void func(void);

int main(void)
{
	int i;
	
	for (i = 0;i < 10; i++){
		func();
	}
	
	return(0);
}

void func(void)
{
	static int b = 0;
	int c = 0;
	
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	a++;
	b++;
	c++;
}