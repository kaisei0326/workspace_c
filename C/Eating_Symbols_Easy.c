#include <stdio.h>

int main(void)
{
    int ans = 0;
    int i;
    char S[4];

    scanf("%s", S);
    
    for (i = 0; i < 4; i++) {
        if (S[i] == '+') {
            ans++;
        }
        else if (S[i] == '-') {
            ans--;
        }
    }
    printf("%d\n", ans);

    return (0);
}
