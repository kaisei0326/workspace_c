#include<stdio.h>

float kai(int k);

int main(void)
{
	int i;
	
	printf("整数値を入力 : ");
	scanf("%d", &i);
	
	printf("%dの階乗は%.0fになります\n", i, kai(i));
	
	return(0);
}

float kai(int k)
{
	float l;
	
	if(k == 1){
		return(1);
	}
	l = kai(k - 1) * k;
	
	return(l);
}