#include<stdio.h>
int main(void)
{
	int a, b;
	printf("®”1=");
	scanf("%d", &a);
	
	printf("®”2=");
	scanf("%d", &b);
	
	
	while(!((a + b) % 5) == 0){
		printf("®”1=");
		scanf("%d", &a);
		printf("®”2=");
		scanf("%d", &b);
	}
	return(0);
}