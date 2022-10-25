#include<stdio.h>

int main(void)
{
	int a;
	
	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ : ");
	scanf("%d", &a);
	
	if(a % 3 == 0 && a != 0){
		printf("%d‚Í3‚Ì”{”‚Å‚·\n");
	}
	else{
		printf("%d‚Í3‚Ì”{”‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n");
	}
	
	return(0);
}