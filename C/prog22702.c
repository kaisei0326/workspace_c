#include <stdio.h>

typedef struct {
	char name[20];
	float height;
	float weight;
} STYLE;

int main(void)
{
	int i;
	float weight_sum = 0, height_sum = 0;
	STYLE profile[5];
	
	for (i = 0;i < 5; i++){
		printf("���O=");
		scanf("%s", profile[i].name);
		printf("�g��=");
		scanf("%f", &profile[i].height);
		printf("�̏d=");
		scanf("%f", &profile[i].weight);
		
		height_sum += profile[i].height;
		weight_sum += profile[i].weight;
	}
	printf("�g���̕���=%f\n", height_sum / 5);
	printf("�̏d�̕���=%f\n", weight_sum / 5);
	
	return (0);
}
