#include<stdio.h>

int goukei(int n)
{
	int i, g;
	g = 0;
	for(i = 1;i <= n;i++){
		g += i;
			}
	return(g);
}

int main(void)
{
	int a;
	printf("整数=");
	scanf("%d", &a);
	
	printf("1から%dまでの合計値は%dです\n", a, goukei(a));
	
	return 0;
}