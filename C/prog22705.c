#include <stdio.h>

typedef struct{
	float wa;
	float sa;
	float seki;
	float syou;
}KEKKA;

int main(void){
	KEKKA result;
	KEKKA *result_p;
	float f1;
	float f2;
	
	result_p = &result;
	
	printf("À”‚P=");
	scanf("%f", &f1);
	
	printf("À”‚Q=");
	scanf("%f", &f2);
	
	(*result_p).wa = f1 + f2;
	(*result_p).sa = f1 - f2;
	(*result_p).seki = f1 * f2;
	(*result_p).syou = f1 / f2;
	
	printf("%f + %f = %f\n%f - %f = %f\n%f * %f = %f\n%f / %f = %f\n", f1, f2, (*result_p).wa, f1, f2, (*result_p).sa, f1, f2, (*result_p).seki, f1, f2, (*result_p).syou);
	
	return (0);
}