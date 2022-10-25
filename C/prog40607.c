#include <stdio.h>

int main(void)
{
    int i;

    printf("16進数=");
    scanf("%x", &i);

    printf("%xの2の補数は%xです\n", i, ~i);

    return (0);
}