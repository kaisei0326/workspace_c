#include <stdio.h>

int main(void)
{
    int i;
    unsigned char uc;

    printf("16i”=");
    scanf("%x", &uc);

    printf("2i”=");
	for (i = 7; i >= 0; i--){
		if((uc & (1 << i)) == 0){
			printf("0");
		}
		else {
			printf("1");
		}
	}
	
	printf("\n");

    return(0);
}