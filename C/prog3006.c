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
	
	printf("奇数を入力してください:");
	scanf("%d", &ransuu);
	
	c = '1';
	while(c != '0'){
		printf("1:ぐう 2:ちょき 3:ぱあ 0:おわり\n");
		c = c = getch();
		
		player = c - '0';
		
		switch(player){
		  case 1:
		    printf("YOU		: ぐう\n");
			break;
			
		  case 2:
		    printf("YOU		: ちょき\n");
			break;
			
		  case 3:
		    printf("YOU		: ぱあ\n");
			break;
		}
		
		if(player != 0){
			ransuu = (ransuu * 12869 + 6925) % 32768;
			com = (ransuu % 3) + 1;
			switch(com){
	      case 1:
		    printf("COM : ぐう\n");
		    break;
			
		  case 2:
		    printf("COM : ちょき\n");
			break;
			
		  case 3:
		    printf("COM : ぱあ\n");
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
	    printf("あいこです\n");
		aiko += 1;
		break;
	  case 1:
	    printf("かちです!\n");
		kati += 1;
		break;
	  case 2:
	    printf("まけです...\n");
		make += 1;
		break;
	}
	printf("只今の成績%2d勝%2d敗%2d引\n", kati, make, aiko);
	}
	return(0);
}