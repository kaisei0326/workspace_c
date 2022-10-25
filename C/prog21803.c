#include<stdio.h>

int main(void)
{
	int a;
	
	printf("®”=");
	scanf("%d", &a);
	
	do{
		printf("Hello, world!\n");
		a--;
	}while(a != 0);
	
	return(0);
}