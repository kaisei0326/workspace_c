#include <stdio.h>

struct style {
	float height;
	float weight;
};

int main(void)
{
	float BMI;
	struct style body;
	
	printf("�g��(cm)=");
	scanf("%f", &body.height);
	
	printf("�̏d(kg)=");
	scanf("%f", &body.weight);
	
	BMI = body.weight / ((body.height / 100) * (body.height / 100));
	
	printf("BMI��%.2f�ł��B", BMI);
	
	return 0;
}