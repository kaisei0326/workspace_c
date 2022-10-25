#include<stdio.h>

int main(void)
{
    int n;
    int i;
    
    printf("n=");
    scanf("%d", &n);

	printf("+");
    for (i = 1; i < n; i++){
		
        if ((i % 2) == 1){
            printf("*");
        }
        else {
            printf("+");
        }
    }

    printf("\n");

    return (0);
}
