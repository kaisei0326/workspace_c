#include <stdio.h>

void input_int(int *p);

int main(void)
{
	int a[3];
	int i;

	input_int(&a[0]);

	for (i = 0; i < 3; i++){
		printf("a[%d]=%d\n", i, a[i]);
	}

	return (0);
}

void input_int(int *p)
{
	int i;

	for (i = 0; i < 3; i++){
		printf("®”=");
		scanf("%d", &p[i]);
	}
}