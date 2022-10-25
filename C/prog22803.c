#include <stdio.h>

typedef struct {
	float wa;
	float sa;
	float seki;
	float syou;
} RESULT;

void keisan(float num1, float num2, RESULT *kekka);

int main(void)
{
	float num1;
	float num2;
	RESULT kekka;

	printf("num1=");
	scanf("%f", &num1);
	printf("num2=");
	scanf("%f", &num2);

	keisan(num1, num2, &kekka);

	printf("num1 + num2 = %f\n", kekka.wa);
	printf("num1 - num2 = %f\n", kekka.sa);
	printf("num1 * num2 = %f\n", kekka.seki);
	printf("num1 / num2 = %f\n", kekka.syou);

	return (0);
}

void keisan(float num1, float num2, RESULT *kekka)
{
	kekka->wa = num1 + num2;
	kekka->sa = num1 - num2;
	kekka->seki = num1 * num2;
	kekka->syou = num1 / num2;
}