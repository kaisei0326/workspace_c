#include <stdio.h>

#define MAX_NUM 5

int *max_int(int *i);

int main(void)
{
	int data[MAX_NUM];
	int num;
	int *max;
	int i;
	
	for (i = 0; i < MAX_NUM; i++){
		printf("®”%d=", i + 1);
		scanf("%d", &data[i]);
	}
	
	max = max_int(data);
	
	printf("Å‘å’l=%d\n", *max);
	
	return (0);
}

int *max_int(int *i)
{
	int a; 
	int *b;
	
	b = i;
	
	for (a = 1; a < MAX_NUM; a++){
		if (*b < i[a]){
			b = &i[a];
		}
	}
	return (b);
}