#include <stdio.h>

char str[20];

void input_str(void);

int main(void)
{
    input_str();

    printf("%s", str);

    return (0);
}
