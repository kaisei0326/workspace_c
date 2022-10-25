#include<stdio.h>
#include<conio.h>

int main(void)
{
  char c;
  
  c = '1';
  
    printf("1:‚®‚¤ 2:‚¿‚å‚« 3:‚Ï‚  0:‚¨‚í‚è\n");
	while(c != '0'){
		c = getch();
		
		switch(c){
		  case '1':
		    printf("‚®‚¤\n");
			break;
			
		  case '2':
		    printf("‚¿‚å‚«\n");
			break;
			
		  case '3':
		    printf("‚Ï‚ \n");
			break; 
		}
	}
	
	return(0);
}
