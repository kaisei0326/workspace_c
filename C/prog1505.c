#include<stdio.h>

int main(void)
{
	int a;
	printf("�o�Ȕԍ�=");
	scanf("%d", &a);
	if((a < 11) && (a > 0)){
		switch(a){
	  	  case 2:
	  	  case 5:
	  	  case 7:
	  	  case 9:
	  	  case 10:
	    	printf("���q�ł�\n");
			break;
		
	  	  default:
	    	printf("�j�q�ł�\n");
			break;
		}
	}
	else{
		printf("ERROR\n");
	}
	return(0);
}