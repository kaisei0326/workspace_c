#include <stdio.h>

int main(void)
{
    int i;

    printf("��������͂��Ă��������F");
    scanf("%d", &i);

    if (i == 0){
        printf("%d��0�ł�\n", i);
    }
    else {
        printf("%d��0�ł͂���܂���\n", i);
    }

    return (0);
}
