#include<stdio.h>
#include<conio.h>

int main(void)
{
  char c;
  
  c = '1';
  
    printf("1:���� 2:���傫 3:�ς� 0:�����\n");
	while(c != '0'){
		c = getch();
		
		switch(c){
		  case '1':
		    printf("����\n");
			break;
			
		  case '2':
		    printf("���傫\n");
			break;
			
		  case '3':
		    printf("�ς�\n");
			break; 
		}
	}
	
	return(0);
}
