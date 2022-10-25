#include <stdio.h>

void input_num(int n, int num[]);

int main(void)
{
    int num[100];
    int n;
    int i;

    printf("整数を何回入力しますか=");
    scanf("%d", &n);

    input_num(n, num);

    printf("入力した整数は\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", num[i]);
    }
    printf("です\n");

    return (0);
}

void input_num(int n, int num[])
{
    int i;
    for (i = 0; i < n; i++) {
        printf("整数%d>> ", i + 1);
        scanf("%d", &num[i]);
    }
}


