#include<stdio.h>
#include<conio.h>

int main(void)
{
	char c;
	
	while (1){
		c = getch();
		if(c >= 'a' && c <= 'z'){
			printf("¬•¶Žš\n");
		}
		else if(c >= 'A' && c <='Z'){
			printf("‘å•¶Žš\n");
		}
	}
	return(0);
}
	