#include <stdio.h>

int x;
int y;

int abs(void);

int main(void)
{
    int anc;

    printf("x>> ");
    scanf("%d", &x);
    printf("y>> ");
    scanf("%d", &y);

    anc = abs();

    printf("%d\n", anc);

    return (0);
}
