#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int k;
    
    printf("????=");
    scanf("%d", &i);

    for (j = 1; j <= i; j++){
        for (k = 1; k <= j; k++){
            printf("*");
        }
		printf("\n");
    }
    

    return (0);
}