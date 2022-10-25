#include <stdio.h>

typedef struct {
	float wa;
	float sa;
	float seki;
	float syou;
	float num1;
	float num2;
} RESULT;

void keisan(RESULT *kekka);

int main(void)
{
	RESULT kekka;

	printf("num1=");
	scanf("%f", &kekka.num1);
	printf("num2=");
	scanf("%f", &kekka.num2);

	keisan(&kekka);

	printf("num1 + num2 = %f\n", kekka.wa);
	printf("num1 - num2 = %f\n", kekka.sa);
	printf("num1 * num2 = %f\n", kekka.seki);
	printf("num1 / num2 = %f\n", kekka.syou);

	return (0);
}

void keisan(RESULT *kekka)
{
	kekka->wa = kekka->num1 + kekka->num2;
	kekka->sa = kekka->num1 - kekka->num2;
	kekka->seki = kekka->num1 * kekka->num2;
	kekka->syou = kekka->num1 / kekka->num2;
}