#include<stdio.h>

int nibai(int x)
{
	return(x * 2);
}

int main(void)
{
	int a;
	printf("整数=");
	scanf("%d", &a);
	
	printf("2倍の数は%dです\n", nibai(a));
	
	return(0);
}