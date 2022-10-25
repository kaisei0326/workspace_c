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
		printf("—” = %d\n", (ransuu % 3) + 1);
		/*
		switch(ransuu % 3){
	      case 0:
		    printf("1\n");
		    break;
			
		  case 1:
		    printf("2\n");
			break;
			
		  case 2:
		    printf("3\n");
			break;
		}
		*/
	}
	return (0);
}