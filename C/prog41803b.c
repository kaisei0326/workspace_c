#include <stdio.h>

extern char str[20];

void input_str(void)
{
    printf("String=");
    scanf("%s", str);
}
