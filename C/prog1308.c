#include<stdio.h>
int main(void)
{
	int a;
	printf("7Œ‰½“ú‚Å‚·‚©H");
	printf("“ú‚É‚¿=");
	scanf("%d", &a);
	
	if(a % 7 == 1){
		 printf("7Œ%d“ú‚Í“y—j“ú‚Å‚·", a);
	}
	else if(a % 7 == 0){
		 printf("7Œ%d“ú‚Í‹à—j“ú‚Å‚·", a);
	}
	else if(a % 7 == 6){
		 printf("7Œ%d“ú‚Í–Ø—j“ú‚Å‚·", a);
	}
	else if(a % 7 == 5){
		 printf("7Œ%d“ú‚Í…—j“ú‚Å‚·", a);
	}
	else if(a % 7 == 4){
		 printf("7Œ%d“ú‚Í‰Î—j“ú‚Å‚·", a);
	}
	else if(a % 7 == 3){
		 printf("7Œ%d“ú‚ÍŒ—j“ú‚Å‚·", a);
	}
	else if(a % 7 == 2){
		 printf("7Œ%d“ú‚Í“ú—j“ú‚Å‚·", a);
	}
	return(0);
}