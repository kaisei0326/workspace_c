#include <stdio.h>

int main(void)
{
	int N, A;
	
	scanf("%d", &N);
	scanf("%d", &A);
	
	if (A - (N % 500) >= 0){
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
	
	return (0);
}