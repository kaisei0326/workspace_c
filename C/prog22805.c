#include <stdio.h>

typedef struct {
	float wa;
	float sa;
	float seki;
	float syou;
	float num1;
	float num2;
} RESULT;

void input(RESULT *kekka);
void keisan(RESULT *kekka);
void print(RESULT *kekka);

int main(void)
{
	RESULT kekka;
	
	input(&kekka);
	keisan(&kekka);
	print(&kekka);

	return (0);
}

void input(RESULT *kekka)
{
	printf("num1=");
	scanf("%f", &kekka->num1);
	printf("num2=");
	scanf("%f", &kekka->num2);
}

void keisan(RESULT *kekka)
{
	kekka->wa = kekka->num1 + kekka->num2;
	kekka->sa = kekka->num1 - kekka->num2;
	kekka->seki = kekka->num1 * kekka->num2;
	kekka->syou = kekka->num1 / kekka->num2;
}

void print(RESULT *kekka)
{
	printf("num1 + num2 = %f\n", kekka->wa);
	printf("num1 - num2 = %f\n", kekka->sa);
	printf("num1 * num2 = %f\n", kekka->seki);
	printf("num1 / num2 = %f\n", kekka->syou);
}