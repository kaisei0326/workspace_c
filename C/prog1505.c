#include<stdio.h>

int main(void)
{
	int a;
	printf("出席番号=");
	scanf("%d", &a);
	if((a < 11) && (a > 0)){
		switch(a){
	  	  case 2:
	  	  case 5:
	  	  case 7:
	  	  case 9:
	  	  case 10:
	    	printf("女子です\n");
			break;
		
	  	  default:
	    	printf("男子です\n");
			break;
		}
	}
	else{
		printf("ERROR\n");
	}
	return(0);
}