#include <stdio.h>

int seisuu(char str[]);
int suuji(char str[]);

int main(void)
{
    char str1[100];
    char str2[100];
    int goukei;

    while (1){
        printf("•¶Žš—ñ1=");
        scanf("%s", str1);
        if (suuji(str1) == 1){
            break;
        }
    }
    while (1){
        printf("•¶Žš—ñ2=");
        scanf("%s", str2);
        if (suuji(str2) == 1){
            break;
        }
    }

    goukei = seisuu(str1) + seisuu(str2);

    printf("%s + %s = %d\n", str1, str2, goukei);

    return (0);
}

int suuji(char str[])
{
    int i;
    
    i = 0;
    while (str[i] != '\0'){
        if (str[i] > '9' || str[i] < '0'){
            return (0);
        }
        i++;
    }
    
    return (1);
}

int seisuu(char str[])
{
    int i;
    int n;
    
    i = 0;
    n = 0;
    while (str[i] != '\0'){
        n = n * 10 + (str[i] - '0');
        i++;
    }
    
    return (n);
}
