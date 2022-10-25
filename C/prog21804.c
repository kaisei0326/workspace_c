#include<stdio.h>

int main(void)
{
	int x, y, z;
	do{
		printf("x=");
		scanf("%d", &x);
		printf("y=");
		scanf("%d", &y);
		z = x + y;
	}while(z % 7 != 0);
	
	return(0);
}