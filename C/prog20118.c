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
		    printf("ñk\n");
			break;
			
		  case 's':
		  case 'S':
		    printf("ìÏ\n");
			break;
			
		  case 'e':
		  case 'E':
		    printf("ìå\n");
			break;
			
		  case 'w':
		  case 'W':
		    printf("êº\n");
			break;
		}
	}
	return(0);
}