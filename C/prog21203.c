#include<stdio.h>

int input(int x, int y)
{
	int i;
	i = 0;
	if(x > y){
		i++;
	}
	else if(x < y){
		i--;
	}
	return(i);
}

int main(void)
{
	int a, b;
	printf("®”1=");
	scanf("%d", &a);
	printf("®”2=");
	scanf("%d", &b);
	
	switch(input(a, b)){
	  case 0:
	    printf("“¯‚¶’·‚³‚Å‚·\n");
		break;
		
	  case 1:
	    printf("1‚Ì•û‚ª‘å‚«‚¢‚Å‚·\n");
		break;
		
	  case -1:
	    printf("2‚Ì•û‚ª‘å‚«‚¢‚Å‚·\n");
		break;
	}
	return 0;
}