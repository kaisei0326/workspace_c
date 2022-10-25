#include <stdio.h>

int main(void)
{
    int a;

    printf("“_”=");
    scanf("%d", &a);

    if ((0 <= a) && (a <= 59)){
        printf("Ô“_‚Å‚·\n");
    }
    else {
        printf("‡Ši‚Å‚·\n");
    }
    
    return (0);
}
