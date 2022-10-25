#include <stdio.h>

int main(void)
{
    int i;
    printf("16進数=");
    scanf("%x", &i);

    printf("16進数%xのビットを反転させると%xになります\n", i, ~i);

    return (0);
}
