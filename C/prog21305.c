#include<stdio.h>

int fugou(int n);

int main(void)
{
	int a, i;
	printf("®”=");
	scanf("%d", &i);
	
	a = fugou(i);
	
	switch(a){
	  case 0:
	    printf("0‚Å‚·\n");
		break;
		
	  case 1:
	    printf("³‚Ì”‚Å‚·\n");
		break;
		
	  case -1:
	    printf("•‰‚Ì”‚Å‚·\n");
		break;
		
	  default:
	    printf("ERROR");
		break;
	}
	
	return(0);
}

int fugou(int n)
{
	int a = 0;
	
	if(n != 0 && n > 0){
		a++;
	}
	else if(n < 0){
		a--;
	}
	
	return(a);
}