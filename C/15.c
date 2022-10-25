#include<stdio.h>

int main(void)
{
	int a, b, c;
	printf("x=");
	scanf("%d", &a);
	
	for(c=0;c<a;c++){
		for(b=0;b<a;b++){
			printf("%d", a);
		}
		printf("\n");
	}
	return 0;
}