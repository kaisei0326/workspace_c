#include<stdio.h>
int main(void)
{
	int a;
	printf("®”=");
	scanf("%d", &a);
	
	if((a % 2 == 0) && (a % 3 == 0)){
		printf("‚U‚Ì”{”‚Å‚·");
	}
	else{
		printf("‚U‚Ì”{”‚Å‚Í‚ ‚è‚Ü‚¹‚ñ");
	}
	return(0);
}