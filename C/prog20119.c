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
		    printf("機械システム工学科\n");
			break;
			
		  case '2':
		    printf("情報通信システム工学科\n");
			break;
			
		  case '3':
		    printf("メディア情報工学科\n");
			break;
			
		  case '4':
		    printf("生物資源工学科\n");
			break;
		}
	}
	return(0);
}