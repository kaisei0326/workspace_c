#include<stdio.h>

int main(void)
{
    int y[2];
	int x;
	
	x = 3;
	y[0] = x * x + 3 * x + 5;
	x = 4;
	y[1] = x * x + 3 * x + 5;
	
	printf("y[0]=%d, y[1]=%d\n", y[0], y[1]);
	
	return(0);
	
}