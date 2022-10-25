#include<stdio.h>
int main(void)
{
	int a, b;
	printf("n=");
	scanf("%d", &a);
	
	b = a % 10;
	while (!(b == 1)){
		printf("n=");
		scanf("%d", &a);
		b = a % 10;
	}
	return(0);
}