#include <stdio.h>

int main(void)
{
    int x;
    
    printf("16進数=");
    scanf("%x", &x);

    printf("%xの文字コードの文字は%cです\n", x, x);
    
    return (0);
}
