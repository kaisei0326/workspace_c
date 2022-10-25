#include <stdio.h>

typedef struct {
    int n1;
    int n2;
} NUM;

void data_in(NUM *data);
void data_print(NUM *data);

int main(void)
{
    NUM data;

    data_in(&data);

    data_print(&data);

    return (0);
}

void data_in(NUM *data)
{
    printf("n1>> ");
    scanf("%d", &data->n1);
    printf("n2>> ");
    scanf("%d", &data->n2);
}

void data_print(NUM *data)
{
    printf("n1=%d\n", data->n1);
    printf("n2=%d\n", data->n2);
}
