#include<stdio.h>
int main(void)
{
    int x;
	int y[3];
	 
	x = 0;
	y[0] = x * 2 + 3;
	x++;
	y[1] = x * 2 + 3;
	x++;
	y[2] = x * 2 + 3;
	
	x = 0;
	printf("x=%d,y=%d\n", x++, y[0]);
	printf("x=%d,y=%d\n", x++, y[1]);
	printf("x=%d,y=%d\n", x++, y[2]);
	
	return(0);
	
}