#include <stdio.h>

int main(void)
{
    char c[20];
	unsigned char uc = 1;
    int i, j = 1, anc = 0;

    printf("2�i��=");
    scanf("%c", c);
	
	for (i = 0; i < 8; i++){
		uc <<= i;
		if(c[i] == 1){
			anc += uc;
		}
	}

    printf("10�i��=%d\n", anc);
    printf("2�{�����=%d\n", anc << 1);

    return (0);
}