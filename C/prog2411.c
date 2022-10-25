#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("x=");
	scanf("%d", &a);
	for(b = 1;b <= a; b++){
		for(c = 1;c <= a; c++){
		printf("%d", a);
		}
		printf("\n");
	}
	return(0);
}
		