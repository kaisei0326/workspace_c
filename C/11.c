#include<stdio.h>

int main(void)
{
	int a, b=0, c;
	printf("x=");
	scanf("%d", &c);
	for(a = 1;a<= c;a++){
		b += a;
	}
	printf("1から%dまでの合計は%dです\n", c, b);
	return 0;
}