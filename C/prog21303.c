#include <stdio.h>

float bmi(float sintyou, float taijyuu);

int main(void)
{
	float sintyou, taijyuu, BMI;
	printf("�g��(cm)=");
	scanf("%f", &sintyou);
	printf("�̏d(kg)=");
	scanf("%f", &taijyuu);
	
	printf("BMI��%.2f�ł�.", bmi(sintyou, taijyuu));
	
	return(0);
}

float bmi(float sintyou, float taijyuu)
{
	float BMI;
	BMI = taijyuu / ((sintyou / 100) * (sintyou / 100));
	return(BMI);
}
	