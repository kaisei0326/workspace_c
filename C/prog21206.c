#include <stdio.h>

void hoge(int n);

int main(void)
{
	int i;
	
	printf("��=");
	scanf("%d", &i);
	
	hoge(i);
	
	return (0);
}

void hoge(int n)
{
	int i;
	
	for (i = 0; i < n; i++){
		printf("hoge");
	}
}