#include<stdio.h>

int min3(int x, int y, int z)
{
	if(x < y && x < z){
		return(x);
	}
	else if(y < x && y < z){
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
	
	printf("最も小さい値は%dです\n", min3(a, b, c));
	
	return (0);
}