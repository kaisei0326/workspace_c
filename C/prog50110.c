#include <stdio.h>

void copy(char *str1, char *str2);

int main(void)
{
    char str1[20];
    char str2[20];

    printf("文字列=");
    scanf("%s", str1);

    copy(str1, str2);

    printf("コピー文字列=%s\n", str2);

    return (0);
}

void copy(char *str1, char *str2)
{
    do {
        *str2++ = *str1;
    } while (*str1++ != '\0');
}
