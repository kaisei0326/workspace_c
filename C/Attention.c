#include <stdio.h>

int main(void)
{
	int N;
	char S[300000];
	int i;
	int east = 0, west = 0;
	
	scanf("%d", &N);
	scanf("%s", S);
	
	for (i = 0; i < N; i++) {
		if (S[i] == 'W') {
			west++;
		}
		else if (S[i] == 'E') {
			east++;
		}
	}
	
	if (west > east) {
		printf("%d\n", east - 1);
	}
	else {
		printf("%d\n", west - 1);
	}
	
	return (0);
}