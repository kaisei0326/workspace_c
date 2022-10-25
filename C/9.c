#include<stdio.h>

int main(void)
{
	int a, b, c;
	printf("x=");
	scanf("%d", &a);
	
	printf("y=");
	scanf("%d", &b);
	for(c = a;c <= b;c++){
		printf("%d\n", c);
	}
	return 0;
}