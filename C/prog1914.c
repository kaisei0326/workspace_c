#include<stdio.h>
int main(void)
{
	int a, b;
	printf("x=");
	scanf("%d", &a);
	
	for(b=1;b<=a;b++){
		printf("%d", a);
	}
	printf("\n");
	return(0);
}