#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int keta = 1;
	int sum;
	
	while(scanf("%d %d", &a, &b) != EOF){
		sum = a + b;
		while(sum >= 10){
			sum /= 10;
			keta++;
		}
		printf("%d\n", keta);
		keta = 1;
	}
	
	return (0);
}