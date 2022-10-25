#include<stdio.h>

int main(void)
{
	char score[9][2];
	int i, j;
	int a=0, b=0;
	
	for(i=0;i<9;i++){
		printf("%d‰ñ•\(Aƒ`[ƒ€)=", i + 1);
        scanf("%d", &score[i][0]);
        printf("%d‰ñ— (Bƒ`[ƒ€)=", i + 1);
        scanf("%d", &score[i][1]);
    }
	
	for (i=0;i<9;i++){
        a += score[i][0];
		b += score[i][1];
     
    }

	
	
	
	printf("----------------------------------------------\n");
	printf("ƒ`[ƒ€  ‚P  ‚Q  ‚R  ‚S  ‚T  ‚U  ‚V  ‚W  ‚X  Œv\n");
	printf("----------------------------------------------\n");
	for (j = 0; j < 2; j++){
        if (j == 0){
            printf("  A   ");
        }
        else {
            printf("  B   ");
        }
        for (i = 0; i < 9; i++){
            printf("  %2d", score[i][j]);
        }
        if (j == 0){
            printf("  %2d\n", a);
        }
        else {
            printf("  %2d\n", b);
        }
    }
    printf("----------------------------------------------\n");

	if(a == b){
		printf("Ÿ•‰‚Íˆø‚«•ª‚¯‚Å‚·\n");
	}
	else if(a < b){
		printf("Bƒ`[ƒ€‚ÌŸ‚¿\n");
	}
	else if(a > b){
		printf("Aƒ`[ƒ€‚ÌŸ‚¿\n");
	}
	return(0);
}
	
