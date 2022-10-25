#include <stdio.h>
#include <conio.h>

int main(void)
{
	char c;
	int ransuu;
	
	printf("Šï”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d", &ransuu);
	c = '1';
	while (c != '0'){
		c = getch();
		ransuu = (ransuu * 12869 + 6925) % 32768;
		switch(ransuu % 3){
	      case 0:
		    printf(" ‚®‚¤\n");
		    break;
			
		  case 1:
		    printf(" ‚¿‚å‚«\n");
			break;
			
		  case 2:
		    printf(" ‚Ï‚ \n");
			break;
		}
		
	}
	return (0);
}