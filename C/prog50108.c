#include <stdio.h>

int main(void)
{
    char str[20];
    char *p;

    printf("文字列=");
    scanf("%s", str);

    p = str;
    while (*p != '\0') {
        printf("%c", *p++);
    }

    return (0);
}
