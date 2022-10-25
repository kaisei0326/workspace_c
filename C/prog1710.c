#include<stdio.h>
int main(void)
{
	int a, x, y;
	printf("x=");
	scanf("%d", &x);
	
	printf("y=");
	scanf("%d", &y);
	
	for(a=x;a<=y;a++){
		printf("%d\n", a);
	}
	return(0);
}