#include<stdio.h>

int goukei(int g);

int main(void)
{
	int i;
	
	printf("整数値=");
	scanf("%d", &i);
	
	printf("1から%dまでの合計=%d\n", i, goukei(i));
	
	return(0);
}

int goukei(int g)
{
	int i;
	
	if(g == 1){
		return(1);
	}
	i = goukei(g - 1) + g;
	
	return(i);
}