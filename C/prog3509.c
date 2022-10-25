#include <stdio.h>


int main(void)
{
	int i;
	int n;
    int sum;
	sum = 0;
	
	printf("n=");
	scanf("%d", &n);
	
	
    for (i = 1; i <= n; i++){
        sum += i;
    }

    printf("1‚©‚ç%d‚Ü‚Å‚Ì‡Œv‚Í%d‚Å‚·\n", n, sum);

    return (0);
}