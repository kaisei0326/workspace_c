#include <stdio.h>

int main(void)
{
    int i;

    printf("整数=");
    scanf("%d", &i);

    if (i % 2 == 0){
        printf("%dは偶数です\n");
    }
    else {
        printf("%dは奇数です\n");
    }

    return (0);
}