#include <stdio.h>

int main(void)
{
	int N;
	int a[];
	int f;
	int a, b, c;
	
	scanf("%d", &N);
	
	for(f = 0; f < N; f++){
		scanf("%d", &a[f]);
	}
	
	for (a = 0; a < N - 1; a++) {
		for (b = N - 1; b > a; b--) {
			if (a[b - 1] > a[b]) {
				c = a[b];
				a[b] = a[b - 1];
				a[b - 1] = c;
			}
		}
	}
	
	for(f = 0; f < N; f++){
		printf("%d", a[f])
	}
	
	return (0);
}