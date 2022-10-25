#include<stdio.h>

int x = 700;

void printf_x(void);

void printf_x(void)
{
	printf("(1)x = %d\n", x);
}

int main(void)
{
	int i;
	int x;
	
	x = 800;
	
	printf_x();
	
	printf("(2)x = %d\n", x);
	
	for(i = 0;i < 5;i++){
		int x;
		x = i * 100;
		printf("(3)x = %d\n", x);
	}
	
	printf("(4)x = %d\n", x);
	
	return(0);
	}