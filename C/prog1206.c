#include<stdio.h>
int main(void)
{
    int a;
	int b;
	int i;
	
	printf("a=");
	scanf("%d", &a);
	
	printf("b=");
	scanf("%d", &b);
	
	if(a > b){
		i = a - b;
	}
	else{
		i = b - a;
	}
	
	printf("aとbの差の絶対値は%dです", i);
	
	return(0);
}