#include <stdio.h>

int main(void)
{
    int a;

    printf("�_��=");
    scanf("%d", &a);

    if ((0 <= a) && (a <= 59)){
        printf("�ԓ_�ł�\n");
    }
    else {
        printf("���i�ł�\n");
    }
    
    return (0);
}
