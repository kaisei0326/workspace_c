#include<stdio.h>
int main(void)
{
	int a;
	
	printf("i=");
	scanf("%d", &a);
	
	switch (a % 3){
	  case 0:
		printf("����؂�܂�");
		break;
		
	  case 1:
		printf("���܂�͂P�ł�");
		break;
		
	  case 2:
	    printf("���܂�͂Q�ł�");
		break;
		
	}
	printf("\n");
	return(0);
}