#include <stdio.h>
int main(void)
{
	int a;                  //nの入力
	int b;                  //繰り返しから表示までいろいろ
	
	printf("n=");           //入力
	scanf("%d", &a);         
	
	for (b = 1; b <= a ; b++){      //bをa回繰り返す
		if (!(b % 2 == 0)){         //奇数の選別
		printf("%d\n", b);
		}
	}
	return(0);
}
