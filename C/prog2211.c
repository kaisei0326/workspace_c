#include<stdio.h>
int main(void)
{
	int a, b;
	printf("n=");
	scanf("%d", &a);
	
	for (b = 1; b <= a; b++){ 
		if((b % 2) ==1){
			printf("+");
		}
		else{
			printf("*");
		}
	}
	
	printf("\n");
	
	return(0);
}