#include <stdio.h>

int main(void)
{
    int i;

    printf("����=");
    scanf("%d", &i);

    printf("10/4=%d ���܂�%d\n", i >> 2, 10 - 1 >> 2);

    return (0);
}