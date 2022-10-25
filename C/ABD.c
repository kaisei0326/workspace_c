#include <stdio.h>

int main(void)
{
	int N;
	
	scanf ("%d", &N);
	
	printf("%s\n", (N >= 1) && (N <= 999) ? "ABC" : "ABD");
	
	return (0);
}