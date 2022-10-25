#include<stdio.h>
int main(void)
{
	int a;
	
	printf("i=");
	scanf("%d", &a);
	
	switch (a % 3){
	  case 0:
		printf("Š„‚èØ‚ê‚Ü‚·");
		break;
		
	  case 1:
		printf("‚ ‚Ü‚è‚Í‚P‚Å‚·");
		break;
		
	  case 2:
	    printf("‚ ‚Ü‚è‚Í‚Q‚Å‚·");
		break;
		
	}
	printf("\n");
	return(0);
}