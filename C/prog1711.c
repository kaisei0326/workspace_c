#include<stdio.h>
int main(void)
{
	int a, b;
	b = 0;
	for(a=1;a<=10;a++){
		b = b + a;
	}
	printf("1から10までの合計は%dです", b);
	return(0);
}