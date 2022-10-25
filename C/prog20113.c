#include<stdio.h>
#include<conio.h>

int main(void)
{
	char c;
	 c = '1';
	while(c != 'z'){
		c = getch();
		printf("%c\n", c);
	}
	return(0);
}