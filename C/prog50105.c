#include <stdio.h>

void input_data(int i[]);
void min_max(int i[], int *max, int *min);

int main(void)
{
    int data[10];
    int min;
    int max;

    input_data(data);
    min_max(data, &min, &max);

    printf("最大値=%d\n", max);
    printf("最小値=%d\n", min);

    return (0);
}

void input_data(int i[])
{
    int j;
    for (j = 0; j < 10; j++) {
        printf("整数=");
        scanf("%d", &i[j]);
    }
}

void min_max(int i[], int *max, int *min)
{
    int j;
    *max = *min = i[0];

    for (j = 1; j < 10; j++) {
        if (i[j] < *max) *max = i[j];
        if (i[j] > *min) *min = i[j];
    }
}
