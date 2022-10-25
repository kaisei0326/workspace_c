#include <stdio.h>
#include <string.h>

int length(char *s);

int main(void)
{
    char s[20];
    int len;

    printf("文字列=");
    scanf("%s", s);
    len = length(s);

    printf("長さ=%d\n", len);

    return (0);
}

int length(char *s)
{
    int len;

    len = strlen(s);

    return (len);
}
