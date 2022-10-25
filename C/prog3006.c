#include<stdio.h>
#include<conio.h>
int main(void)
{
	char c;
	int ransuu;
	int player;
	int com;
	int a;
	int kati, make, aiko;
	
	a = 0;
	kati = 0;
	make = 0;
	aiko = 0;
	
	printf("Šï”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d", &ransuu);
	
	c = '1';
	while(c != '0'){
		printf("1:‚®‚¤ 2:‚¿‚å‚« 3:‚Ï‚  0:‚¨‚í‚è\n");
		c = c = getch();
		
		player = c - '0';
		
		switch(player){
		  case 1:
		    printf("YOU		: ‚®‚¤\n");
			break;
			
		  case 2:
		    printf("YOU		: ‚¿‚å‚«\n");
			break;
			
		  case 3:
		    printf("YOU		: ‚Ï‚ \n");
			break;
		}
		
		if(player != 0){
			ransuu = (ransuu * 12869 + 6925) % 32768;
			com = (ransuu % 3) + 1;
			switch(com){
	      case 1:
		    printf("COM : ‚®‚¤\n");
		    break;
			
		  case 2:
		    printf("COM : ‚¿‚å‚«\n");
			break;
			
		  case 3:
		    printf("COM : ‚Ï‚ \n");
			break;
		}
		}
	
	if(c == 0){} 
	else if((player == 1) && (com == 2)){
		a = 1;
	}
	else if((player == 2) && (com == 3)){
		a = 1;
	}
	else if((player == 3) && (com == 1)){
		a = 1;
	}
	else if((player == 1) && (com == 3)){
		a = 2;
	}
	else if((player == 2) && (com == 1)){
		a = 2;
	}
	else if((player == 3) && (com == 2)){
		a = 2;
	}
	else{
		a = 0;
	}
	switch(a){
	  case 0:
	    printf("‚ ‚¢‚±‚Å‚·\n");
		aiko += 1;
		break;
	  case 1:
	    printf("‚©‚¿‚Å‚·!\n");
		kati += 1;
		break;
	  case 2:
	    printf("‚Ü‚¯‚Å‚·...\n");
		make += 1;
		break;
	}
	printf("‘ü¡‚Ì¬Ñ%2dŸ%2d”s%2dˆø\n", kati, make, aiko);
	}
	return(0);
}