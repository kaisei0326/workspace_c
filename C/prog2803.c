#include <stdio.h>
#include <conio.h>

int main(void)
{
	char c;
	
	c = 'A';
	while (c != 'x'){
		c = getch();
		printf("%c", c);
	}
	return (0);
}