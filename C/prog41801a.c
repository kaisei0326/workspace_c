#include <stdio.h>

void disp_hello(int n);

int main(void)
{
    int i;

    printf("回数=");
    scanf("%d", &i);

    disp_hello(i);

    return (0);
}
