#include <stdio.h>

struct style {
	float height;
	float weight;
};

int main(void)
{
	float BMI;
	struct style body;
	
	printf("身長(cm)=");
	scanf("%f", &body.height);
	
	printf("体重(kg)=");
	scanf("%f", &body.weight);
	
	BMI = body.weight / ((body.height / 100) * (body.height / 100));
	
	printf("BMIは%.2fです。", BMI);
	
	return 0;
}