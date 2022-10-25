#include<stdio.h>
int main(void)
{
	int a[10];
	int b, c, d, e;
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
	
	b = 0;
	d = 0;
	for(c=0;c<10;c++){
		b = b + a[c];
	if(d<a[c]){
		d = a[c];
	}
	
	if(e>a[c]){
		e = a[c];
	}
	
	}
	printf("Å‘å=%d\n", d);
	printf("Å¬=%d\n", e);
	printf("‡Œv=%d\n", b);
	return(0);
}
