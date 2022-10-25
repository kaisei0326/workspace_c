#include<stdio.h>
int main(void)
{
	int a;
	printf("®”=");
	scanf("%d", &a);
	if(a % 3 == 0){
		printf("%d‚Í‚R‚Ì”{”‚Å‚·\n");
	}
	else{
		printf("%d‚Í‚R‚Ì”{”‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n");
	}
	return(0);
}