#include<stdio.h>
int main(void)
{
	int a, x;
	printf("x=");
	scanf("%d", &x);
	
	for(a=0;a<x;a++){
		printf("Hello, World\n");
	}
	return(0);
}