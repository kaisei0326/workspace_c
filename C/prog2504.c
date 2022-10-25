#include<stdio.h>
int main(void)
{
	int a;
	printf("Œ");
	scanf("%d", &a);
	
	switch (a){
	  case 1:
	  case 3:
	  case 5:
	  case 7:
	  case 8:
	  case 10:
	  case 12:
	    printf("‚R‚P“ú\n");
		break;
		
	  case 4:
	  case 6:
	  case 9:
	  case 11:
	    printf("‚R‚O“ú\n");
		break;
		
	  case 2:
	    printf("‚Q‚W“ú‚Ü‚½‚Í‚Q‚X“ú\n");
	    break;
	}
	return(0);
}