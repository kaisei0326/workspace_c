#include<stdio.h>
int main(void)
{
	float a[4];
	
	printf("数値=");
	scanf("%f", &a[0]);
	
	printf("数値=");
	scanf("%f", &a[1]);
	
	printf("数値=");
	scanf("%f", &a[2]);
	
	a[3] = (a[0] + a[1] + a[2]) / 3;
	printf("平均=%f", a[3]);
	
	return(0);
}