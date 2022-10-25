#include <stdio.h>

int main(void)
{
	int A, B, C;
	int K;
	int i;
	
	scanf("%d %d %d", &A, &B, &C);
	scanf("%d", &K);
	
	if (A >= B && A >= C) {
		for (i = 0; i < K; i++) {
			A *= 2;
		}
	}
	else if (B >= C) {
		for (i = 0; i < K; i++) {
			B *= 2;
		}
	}
	else {
		for (i = 0; i < K; i++){
			C *= 2;
		}
	}
	
	printf("%d\n", A + B + C);
	
	return (0);
}