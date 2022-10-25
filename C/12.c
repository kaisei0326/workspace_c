#include<stdio.h>

int main(void)
{
	int a[10], b, c=0;
	for(b =0;b<10;b++){
		printf("”’l%d=", b+1);
		scanf("%d", &a[b]);
		c += a[b];
	}
	printf("‡Œv=%d", c);
	return 0;
}