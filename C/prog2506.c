#include<stdio.h>
int main(void)
{
	int a;
	
	printf("���p���(����)=");
	scanf("%d", &a);
	
	switch(a){
	  case 1:
		printf("����:200�~\n");
		break;
		
	  case 2:
	    printf("�k����:300�~\n");
		break;
		
	  case 3:
		printf("�����:400�~\n");
		break;
		
	  case 4:
	    printf("����k:500�~\n");
		break;
		
	  case 5:
		printf("�ΐ�:600�~\n");
		break;
		
	  case 6:
	    printf("����:700�~\n");
		break;
		
	  case 7:
		printf("����:750�~\n");
		break;
		
	  case 8:
	    printf("�X���:850�~\n");
		break;
		
	  case 9:
	    printf("���c:1000�~\n");
		break;
	}
	return(0);
}