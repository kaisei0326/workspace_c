#include <stdio.h>
int main(void)
{
	int x; /* 入力する数値*/
	int sum; /* 合計値計算用変数*/
	
	sum = 0; /* 合計値を0 に初期化する*/
	x = 1; /* x を0 でない値に初期化する*/
	
	while (x != 0){ /* x が0 でない間繰り返す*/
		printf("整数="); /* 数値の入力*/
		scanf("%d", &x);
		sum += x; /* 合計値の計算*/	
	}
	printf("合計=%d\n", sum); /* 合計値の表示*/
	return (0);
}