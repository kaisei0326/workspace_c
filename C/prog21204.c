#include<stdio.h>

int input_int(void)
{
	int a;
	
	printf("®”=");
	scanf("%d", &a);
	
	return(a);
}

int main(void)
{
	int i;
	
	i = input_int();
	
	printf("%d\n", i);
	
	return(0);
}