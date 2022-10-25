#include<stdio.h>

void hello(void);

int main(void)
{
	int n;
	printf("âÒêî=");
	scanf("%d", &n);
	while(n != 0){
		hello();
		n--;
	}
	
	return(0);
}

void hello(void)
{
	printf("Hello, World!\n");
}