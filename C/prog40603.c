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

    printf("int�^��%d�r�b�g�ł�\n", n);

    return (0);
}