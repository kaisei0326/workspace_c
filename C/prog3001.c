#include<stdio.h>
#include<conio.h>

int main(void)
{
  char c;
  
  c = '1';
  
    printf("1:ぐう 2:ちょき 3:ぱあ 0:おわり\n");
	while(c != '0'){
		c = getch();
		
		switch(c){
		  case '1':
		    printf("ぐう\n");
			break;
			
		  case '2':
		    printf("ちょき\n");
			break;
			
		  case '3':
		    printf("ぱあ\n");
			break; 
		}
	}
	
	return(0);
}
