#include<stdio.h>
#include<conio.h>

int main(void)
{
	char c;
	
	while (1){
		c = getch();
		if(c >= 'a' && c <= 'z'){
			printf("小文字\n");
		}
		else if(c >= 'A' && c <='Z'){
			printf("大文字\n");
		}
	}
	return(0);
}
	