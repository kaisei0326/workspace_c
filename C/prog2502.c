#include<stdio.h>
int main(void)
{
	int a;
	
	printf("i=");
	scanf("%d", &a);
	
	switch (a % 3){
	  case 0:
		printf("割り切れます");
		break;
		
	  case 1:
		printf("あまりは１です");
		break;
		
	  case 2:
	    printf("あまりは２です");
		break;
		
	}
	printf("\n");
	return(0);
}