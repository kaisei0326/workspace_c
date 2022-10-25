#include <stdio.h>

int main(void)
{
	int N;
	int a[10000];
	int i, j, k;
	int chack = 0;
	int ans = 0;
	
	scanf("%d", &N);
	
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < N; i++){
		for (j = 0; j < N; j++){
			if (a[j] % 2 == 0) {
				chack++;
			}
		}
		if (chack == 0) {
			for (k = 0; k < N; k++) {
				if (a[k] % 2 == 1){
					a[k] *= 3;
				}
				else {
					a[k] /= 2;
				}
			}
		}
		chack = 0;
		ans++;
	}
	
	printf("%d\n", a);
	
	return (0);
}