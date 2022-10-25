#include <stdio.h>

int main(void)
{
    unsigned char n;
    unsigned char m;
    
    printf("10i”=");
    scanf("%d", &n);

    printf("16i”=");

    m = n >> 4;
    if (m < 10){
        printf("%c", '0' + m);
    }
    else {
        printf("%c", 'A' + m - 10);
    }

    m = n & 0xf;
    if (m < 10){
        printf("%c", '0' + m);
    }
    else {
        printf("%c", 'A' + m - 10);
    }
    
    printf("\n");

    return (0);
}