#include <stdio.h>

int main(void)
{
	int a;           //数値の関数
	
	a = 1;           //入力の初期化
	while (a != 0){              //０になるまで
		printf("整数=");         //入力表示
		scanf("%d", &a);         //数値の入力
	}
	return (0);
}