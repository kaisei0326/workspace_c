#include<stdio.h>

int main(void)
{
	int a, b, c;
	
	printf("’a¶“ú‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	
	printf("Œ");
	scanf("%d", &a);

	printf("“ú");
	scanf("%d", &b);
	
	c = a * 100 + b;
	
	if(c < 120){
		printf("‚ ‚È‚½‚Í‚â‚¬À‚Å‚·\n");
	}
	else if(c < 219){
		printf("‚ ‚È‚½‚Í‚İ‚¸‚ª‚ßÀ‚Å‚·\n");
	}
	else if(c < 321){
		printf("‚ ‚È‚½‚Í‚¤‚¨À‚Å‚·\n");
	}
	else if(c < 420){
		printf("‚ ‚È‚½‚Í‚¨‚Ğ‚Â‚¶À‚Å‚·\n");
	}
	else if(c < 521){
		printf("‚ ‚È‚½‚Í‚¨‚¤‚µÀ‚Å‚·\n");
	}
	else if(c < 622){
		printf("‚ ‚È‚½‚Í‚Ó‚½‚²À‚Å‚·\n");
	}
	else if(c < 723){
		printf("‚ ‚È‚½‚Í‚©‚ÉÀ‚Å‚·\n");
	}
	else if(c < 823){
		printf("‚ ‚È‚½‚Í‚µ‚µÀ‚Å‚·\n");
	}
	else if(c < 923){
		printf("‚ ‚È‚½‚Í‚¨‚Æ‚ßÀ‚Å‚·\n");
	}
	else if(c < 1024){
		printf("‚ ‚È‚½‚Í‚Ä‚ñ‚Ñ‚ñÀ‚Å‚·\n");
	}
	else if(c < 1122){
		printf("‚ ‚È‚½‚Í‚³‚»‚èÀ‚Å‚·\n");
	}
	else if(c < 1222){
		printf("‚ ‚È‚½‚Í‚¢‚ÄÀ‚Å‚·\n");
	}
	else{
		printf("‚ ‚È‚½‚Í‚â‚¬À‚Å‚·\n");
	}
	
	return(0);
}