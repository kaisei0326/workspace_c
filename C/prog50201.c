#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, i5;

    printf("整数1=");
    scanf("%d", &i1);

    printf("整数2=");
    scanf("%d", &i2);

    printf("整数3=");
    scanf("%d", &i3);

    printf("整数4=");
    scanf("%d", &i4);

    printf("整数5=");
    scanf("%d", &i5);

    if (i1 >= i2 && i1 >= i3 && i1 >= i4 && i1 >= i5) {
        printf("最大値=%d\n", i1);
    }
    if (i2 >= i1 && i2 >= i3 && i2 >= i4 && i2 >= i5) {
        printf("最大値=%d\n", i2);
    }
    if (i3 >= i1 && i3 >= i2 && i3 >= i4 && i3 >= i5){
        
