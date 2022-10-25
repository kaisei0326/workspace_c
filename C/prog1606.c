#include<stdio.h>
int main(void)
{
	float a[4];
	
	printf("”’l=");
	scanf("%f", &a[0]);
	
	printf("”’l=");
	scanf("%f", &a[1]);
	
	printf("”’l=");
	scanf("%f", &a[2]);
	
	a[3] = (a[0] + a[1] + a[2]) / 3;
	printf("•½‹Ï=%f", a[3]);
	
	return(0);
}