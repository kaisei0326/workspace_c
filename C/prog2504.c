#include<stdio.h>
int main(void)
{
	int a;
	printf("����");
	scanf("%d", &a);
	
	switch (a){
	  case 1:
	  case 3:
	  case 5:
	  case 7:
	  case 8:
	  case 10:
	  case 12:
	    printf("�R�P��\n");
		break;
		
	  case 4:
	  case 6:
	  case 9:
	  case 11:
	    printf("�R�O��\n");
		break;
		
	  case 2:
	    printf("�Q�W���܂��͂Q�X��\n");
	    break;
	}
	return(0);
}