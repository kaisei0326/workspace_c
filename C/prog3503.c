#include <stdio.h>

int main(void)
{
    int i;

    printf("®”=");
    scanf("%d", &i);

    if (i % 2 == 0){
        printf("%d‚Í‹ô”‚Å‚·\n");
    }
    else {
        printf("%d‚ÍŠï”‚Å‚·\n");
    }

    return (0);
}