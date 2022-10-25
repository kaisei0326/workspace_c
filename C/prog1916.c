#include<stdio.h>
int main(void)
{
	int d;
	printf("n=");
	scanf("%d", d);
	int a, b, c;
	for(a=1;a<=9;a++){
		for(b=1;b<=9;b++){
		printf("%d*%d=%2d ", b, a, a*b);
		}
		printf("\n");
	}
	return(0);
}