#include<stdio.h>

int add(int x, int y)
{
	return(x + y);
}

int main(void)
{
	int a, b;
	printf("整数1=");
	scanf("%d", &a);
	
	printf("整数2=");
	scanf("%d", &b);
	
	printf("合計値は%dです\n", add(a, b));
	
	return 0;
}