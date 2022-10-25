#include<stdio.h>

int max, min;

void max_min(int seisuu[], int n);

int main(void)
{
	int seisuu[100];
	int n;
	int i;
	
	printf("データ数=");
	scanf("%d", &n);
	
	for(i = 0;i < n;i++){
		printf("整数=");
		scanf("%d", &seisuu[i]);
	}
	
	max_min(seisuu, n);
	
	printf("最大値=%d\n", max);
	printf("最小値=%d\n", min);
	
	return(0);
}

void max_min(int seisuu[], int n)
{
	int i;
	
	max = seisuu[0];
	min = seisuu[0];
	
	for(i = 0;i < n;i++){
		if(max < seisuu[i]){
			max = seisuu[i];
		}
		if(min > seisuu[i]){
			min = seisuu[i];
		}
	}
}