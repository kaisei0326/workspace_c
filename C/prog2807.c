#include<stdio.h>
#include<conio.h>

int main(void)
{
	char a;
	
	a = getch();
	if((a >= 'a') && (a <= 'z')){
		a -= 0x20;
	}
	else if((a >= 'A') && (a <= 'Z')){
		a += 0x20;
	}
	printf("%c", a);
	return(0);
}