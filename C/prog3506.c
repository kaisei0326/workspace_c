#include <stdio.h>

int main(void)
{
    int num;

    printf("１から１０までの整数=");
	scanf("%d", &num);

    if ((num >= 1) && (num <= 10)){
		printf("正解です\n");
    }
	else {
		printf("間違いです\n");
	}

	return (0);
}
