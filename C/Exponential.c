#include <stdio.h>

int main(void)
{
	int X;
	int i;
	int anc = 1, test;
	
	scanf("%d", &X);
	
	if (X == 1){
		printf("1\n");
	}
	else {
		for (i = 2; i * i <= X; i++){
			test = i;
		 	while (test * i <= X){
		 		test *= i;
		 	}
		 	anc = test > anc ? test : anc;
		}
		printf("%d\n", anc);
	}
	
	return (0);
}