#include <stdio.h>

int main(void)
{
	int i;              //繰り返しの変数
	int sum;            //合計を出すための変数
	
	sum = 0;
	for (i = 1; i <= 10; i++){       //10回繰り返す
		sum += i;
	}
	printf("1から10までの合計は%dです\n", sum); //結果
	return (0);
}