#include <stdio.h>

struct style {
	float height;
	float weight;
};

int main(void)
{
	float BMI;
	struct style body;
	
	printf("êgí∑(cm)=");
	scanf("%f", &body.height);
	
	printf("ëÃèd(kg)=");
	scanf("%f", &body.weight);
	
	BMI = body.weight / ((body.height / 100) * (body.height / 100));
	
	printf("BMIÇÕ%.2fÇ≈Ç∑ÅB", BMI);
	
	return 0;
}