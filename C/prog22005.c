#include<stdio.h>

int main(void)
{
	int x[3];
	int y;
	
	for (y = 0; y < 3; y++){
		if(y % 2 == 0){
			printf("x[%d]‚ÌƒAƒhƒŒƒX=%d\n",y,  &x[y]);
		}
	}
	
	return (0);
}