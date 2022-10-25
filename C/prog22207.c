#include <stdio.h>

void input_data(int *p);
int sum_data(int *p);

int main(void)
{
	int a[10];
	int sum;
	
	input_data(a);
	sum = sum_data(a);
	
	printf("‡Œv=%d\n", sum);
	
	return (0);
}

void input_data(int *p)
{
	int i;
	
	for (i = 0; i < 10; i++){
		printf("®”%d = ", i+1);
		scanf("%d", &p[i]);
	}
}

int sum_data(int *p)
{
	int i;
	
	int sum = 0;
	for(i = 0; i < 10; i++){
		sum += p[i];
	}
	return(sum);
}