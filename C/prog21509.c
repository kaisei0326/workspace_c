#include<stdio.h>

int max, min;

void max_min(int seisuu[], int n);

int main(void)
{
	int seisuu[100];
	int n;
	int i;
	
	printf("�f�[�^��=");
	scanf("%d", &n);
	
	for(i = 0;i < n;i++){
		printf("����=");
		scanf("%d", &seisuu[i]);
	}
	
	max_min(seisuu, n);
	
	printf("�ő�l=%d\n", max);
	printf("�ŏ��l=%d\n", min);
	
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