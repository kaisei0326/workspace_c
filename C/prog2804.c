#include<stdio.h>
#include<conio.h>

int main(void)
{
	char a;
	
	a = getch();
	switch(a){
		
	  case 'a':
	    a = 'A';
	    break;
	
	  case 'b':
	    a = 'B';
		break;
		
	  case 'c':
	    a = 'C';
		break;
		
	  default:
	    a = 'X';
		break;
	}
	printf("%c\n", a);
	return(0);
}