#include<stdio.h>

int max3(int x, int y, int z)
{
	if(x > y && x > z){
		return(x);
	}
	else if(y > x && y > z){
		return(y);
	}
	else{
		return(z);
	}
}

int main(void)
{
	int a, b, c;
	
	printf("整数1=");
	scanf("%d", &a);
	printf("整数2=");
	scanf("%d", &b);
	printf("整数3=");
	scanf("%d", &c);
	
	printf("最も大きい値は%dです\n", max3(a, b, c));
	
	return (0);
}