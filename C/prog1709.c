#include<stdio.h>
int main(void)
{
	int a, x;
	printf("x=");
	scanf("%d", &x);
	
	for(a=1;a<=x;a++){
		printf("%d\n", a);
	}
	return(0);
}