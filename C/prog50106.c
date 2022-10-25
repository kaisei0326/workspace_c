#include <stdio.h>

int input_int(int d[]);
int goukei(int d[], int num);

int main(void)
{
    int d[100];
    int num;
    int sum;
    
    num = input_int(d);
    sum = goukei(d, num);

    printf("合計=%d\n", sum);

    return (0);
}

int input_int(int d[])
{
    int num = 0;
    do {
        printf("整数>> ");
        scanf("%d", &d[num]);
        num++;
    } while (d[num - 1] != -1);

    return (num - 1);
}

int goukei(int d[], int num)
{
    int ans = 0;
    
    while (num-- > 0) {
        ans += d[num];
    }

    return (ans);
}
