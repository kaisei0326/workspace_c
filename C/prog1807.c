#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("整数を何回入力しますか:");
	scanf("%d", &a);

	b = 0;
	while(!a == 0){
		printf("整数=");
		scanf("%d", &c);
		b = b + c;
		a--;
	}
	printf("合計=%d\n", b);
	return(0);
}