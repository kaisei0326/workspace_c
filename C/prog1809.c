#include<stdio.h>
int main(void)
{
	int a[10];
	int b, c, d;
	printf("®”1=");
	scanf("%d", &a[0]);
	printf("®”2=");
	scanf("%d", &a[1]);
	printf("®”3=");
	scanf("%d", &a[2]);
	printf("®”4=");
	scanf("%d", &a[3]);
	printf("®”5=");
	scanf("%d", &a[4]);
	printf("®”6=");
	scanf("%d", &a[5]);
	printf("®”7=");
	scanf("%d", &a[6]);
	printf("®”8=");
	scanf("%d", &a[7]);
	printf("®”9=");
	scanf("%d", &a[8]);
	printf("®”10=");
	scanf("%d", &a[9]);
	
	b = (a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9]) / 10;
	c = 0;
	for(d=0;d<10;d++){
		if(b < a[d]){
			c = c + 1;
		}
	}
	printf("•½‹ÏˆÈã=%d", c);
	return(0);
}