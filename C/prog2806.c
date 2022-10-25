#include<stdio.h>
#include<conio.h>

int main(void)
{
	char a;
	
	while(1){
		a = getch();
		if(a == 'z'){
			a = 'a';
			break;
		}
		else{
			a += 1;
			break;
		}
	}
	printf("%c", a);
	return(0);
}
		