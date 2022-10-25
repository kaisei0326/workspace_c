#include <stdio.h>

int main(void)
{
    int i;
    int n;

    i = -1;

    n = 0;
    while (i != 0){
        i <<= 1;
        n++;
    }

    printf("intŒ^‚Í%dƒrƒbƒg‚Å‚·\n", n);

    return (0);
}