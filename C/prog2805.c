#include<stdio.h>
#include<conio.h>

int main(void)
{
	char c;
	
	while (1){
		c = getch();
		if(c >= 'a' && c <= 'z'){
			printf("������\n");
		}
		else if(c >= 'A' && c <='Z'){
			printf("�啶��\n");
		}
	}
	return(0);
}
	