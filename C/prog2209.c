#include<stdio.h>
int main(void)
{
	int n, b;
	printf("n=");
	scanf("%d", &n);
	
	b = 1;
	for(b=1;b<10;b++){
		printf("%d*%d=%2d\n",n,b,n*b);
	}
	return(0);
}