#include<stdio.h>
int main(void)
{
	int a[4];
	printf("”’li‚RŒ…j=");
	scanf("%d", &a[0]);
	
	a[1] = a[0] / 100;
	a[2] = a[0] % 100 / 10;
	a[3] = a[0] % 10;
	printf("‚P‚O‚O‚ÌˆÊ=%d\n", a[1]);
	printf("‚P‚O‚ÌˆÊ=%d\n", a[2]);
	printf("‚P‚ÌˆÊ=%d\n", a[3]);
	
	return(0);
}