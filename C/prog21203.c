#include<stdio.h>

int input(int x, int y)
{
	int i;
	i = 0;
	if(x > y){
		i++;
	}
	else if(x < y){
		i--;
	}
	return(i);
}

int main(void)
{
	int a, b;
	printf("整数1=");
	scanf("%d", &a);
	printf("整数2=");
	scanf("%d", &b);
	
	switch(input(a, b)){
	  case 0:
	    printf("同じ長さです\n");
		break;
		
	  case 1:
	    printf("1の方が大きいです\n");
		break;
		
	  case -1:
	    printf("2の方が大きいです\n");
		break;
	}
	return 0;
}