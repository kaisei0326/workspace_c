#include<stdio.h>

float kai(int i);

int main(void)
{
	int i;
	
	printf("整数値を入力");
	scanf("%d", &i);
	
	printf("%dの階乗は%.0fになります\n", i, kai(i));
	
	return(0);
}

float kai(int i)
{
	int j;
	float k=1;
	
	for(j = 1;j <= i;j++){
		k *= j;
	}
	return(k);
}