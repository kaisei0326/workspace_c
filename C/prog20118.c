#include<stdio.h>
#include<conio.h>

int main(void)
{
	char a;
	a = '1';
	while(a){
		a = getch();
		switch(a){
		  case 'n':
		  case 'N':
		    printf("�k\n");
			break;
			
		  case 's':
		  case 'S':
		    printf("��\n");
			break;
			
		  case 'e':
		  case 'E':
		    printf("��\n");
			break;
			
		  case 'w':
		  case 'W':
		    printf("��\n");
			break;
		}
	}
	return(0);
}