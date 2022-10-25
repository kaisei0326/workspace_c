#include <stdio.h>

int main(void)
{
	int D, N;
	
	scanf("%d %d", &D, &N);
	
	switch (D) {
	  case 0:
	    if (N != 100){
	        printf("%d\n", N);
	    }
	    else {
	    	   printf("101\n");
	    }
	    break;
	   
	  case 1:
	    if (N != 100){
	        printf("%d\n", N * 100);
	    }
		else {
			printf("10100\n");
		}
	    break;
	   
	  case 2:
	    if (N != 100){
	        printf("%d\n", N * 10000);
	    }
		else {
			printf("1010000\n");
		}
	    break;
	}
	
	return (0);
}