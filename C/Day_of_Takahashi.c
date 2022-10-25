#include <stdio.h>

int main(void)
{
    int a, b;
    int ans = 0;

    scanf("%d %d", &a, &b);

    ans += a - 1;
	if (a <= b) {
		ans++;
	}

    printf("%d\n", ans);

    return (0);
}
