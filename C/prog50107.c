#include <stdio.h>

int str_length(char *str);

int main(void)
{
    char str[20];
    int len;

    printf("文字列=");
    scanf("%s", str);

    len = str_length(str);

    printf("長さ=%d\n", len);

    return (0);
}

int str_length(char *str)
{
    int len;

    len = 0;

    while (*str != '\0') {
        str++;
        len++;
    }

    return (len);
}
