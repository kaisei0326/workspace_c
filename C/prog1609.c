#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	
	if(a == b){
		printf("aとbの差の絶対値は0です\n");
	}
	else if(a > b){
	c = a - b;	
	printf("aとbの差の絶対値は%dです\n", c);
	}
	else if(a < b){
		c = b - a; 
 		printf("aとbの差の絶対値は%dです\n", c);
	}
	return(0);
}