#include <stdio.h>

float bmi(float sintyou, float taijyuu);

int main(void)
{
	float sintyou, taijyuu, BMI;
	printf("身長(cm)=");
	scanf("%f", &sintyou);
	printf("体重(kg)=");
	scanf("%f", &taijyuu);
	
	printf("BMIは%.2fです.", bmi(sintyou, taijyuu));
	
	return(0);
}

float bmi(float sintyou, float taijyuu)
{
	float BMI;
	BMI = taijyuu / ((sintyou / 100) * (sintyou / 100));
	return(BMI);
}
	