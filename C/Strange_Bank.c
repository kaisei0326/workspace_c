#include <stdio.h>

int main(void)
{
	int N;
	int times = 0;
	int i;
	int a6 = 46656, a9 = 59049;
	
	scanf("%d", &N);
	
	for (i = 1; i <= 6; i++){
		if (a9 > a6){
			while(N - a9 >= 0 && a9 >= 1){
				times++;
				N -= a9;
			}
			while(N - a6 >= 0 && a6 >= 1){
				times++;
				N -= a6;
			}
		}
		else if (a6 > a9){
			while(N - a6 >= 0 && a6 >= 1){
				times++;
				N -= a6;
			}
			while(N - a9 >= 0 && a9 >= 1){
				times++;
				N -= a9;
			}
		}
		a9 /= 9;
		a6 /= 6;
	}
	times += N;
	printf("%d\n", times);
	
	return (0);
}