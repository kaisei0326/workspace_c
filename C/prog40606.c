#include <stdio.h>

int main(void)
{
    int i;

    printf("®”=");
    scanf("%d", &i);

    printf("%d * 8 = %d\n", i, i << 3);

    return (0);
}