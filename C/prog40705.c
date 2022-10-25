#include <stdio.h>

int main(void)
{
	int height;
	int weight;
	float bmi;
	
	printf("g’·(cm)=");
	scanf("%d", &height);
	
	printf("‘Ìd(kg)=");
	scanf("%d", &weight);
	
	bmi = weight / ((height / 100) * (height / 100));
	
	printf("BMI=%.2f\n", bmi);
	
	return (0);
}