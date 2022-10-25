#include <stdio.h>

int main(void)
{
    int N;
    int key = 0;
    int i;
    int flag = 1000000000;
	int a;

    scanf("%d", &N);
	
	a = N;
	
	while (N < flag) {
		flag /= 10;
	}

    while (N != 0) {
		key += (N / flag);
		N %= flag;;
		flag /= 10;
    }
		

    if (a % key == 0) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return (0);
}
