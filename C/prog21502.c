#include<stdio.h>

int i, x;

void goukei(void);

int main(void)
{
	printf("整数値=");
	scanf("%d", &i);
	
	goukei();
	
	printf("1から%dまでの合計=%d\n", i, x);
	
	return(0);
}

void goukei(void)
{
	int a;
	for(a = 1;a <= i;a++){
		x += a;
	}
}