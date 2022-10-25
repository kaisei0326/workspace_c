#include<stdio.h>

int main(void)
{
	int a, b;
	printf("x=");
	scanf("%d", &a);
	
	for(b=0;b<a;b++){
		printf("%d", a);
	}
	printf("\n");
	return 0;
}