#include <stdio.h>

int main(void)
{
    int i;

    printf("����=");
    scanf("%d", &i);

    if (i % 2 == 0){
        printf("%d�͋����ł�\n");
    }
    else {
        printf("%d�͊�ł�\n");
    }

    return (0);
}