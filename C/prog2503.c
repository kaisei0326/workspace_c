#include<stdio.h>
int main(void)
{
	int a;
	printf("����");
	scanf("%d", &a);
	
	switch (a){
	  case 3:
	  case 4:
	  case 5:
	    printf("�t�ł�\n");
		break;
		
	  case 6:
	  case 7:
	  case 8:
	    printf("�Ăł�\n");
		break;
		
	  case 9:
	  case 10:
	  case 11:
	    printf("�H�ł�\n");
		break;
		
	  case 12:
	  case 1:
	  case 2:
	    printf("�~�ł�\n");
		break;	
		
	  default:
	    printf("�́H\n");
	    break;
	}
	return(0);
}
