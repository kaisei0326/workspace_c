#include<stdio.h>
#include<conio.h>

int main(void)
{
	char a;
	a = '1';
	while(a){
		a = getch();
		switch(a){
		  case '1':
		    printf("�@�B�V�X�e���H�w��\n");
			break;
			
		  case '2':
		    printf("���ʐM�V�X�e���H�w��\n");
			break;
			
		  case '3':
		    printf("���f�B�A���H�w��\n");
			break;
			
		  case '4':
		    printf("���������H�w��\n");
			break;
		}
	}
	return(0);
}