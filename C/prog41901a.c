#include <stdio.h>

float bmi(float height, float weight);

int main(void)
{
    float height, weight;
    float BMI;

    printf("height(m)>> ");
    scanf("%f", &height);
    printf("weight(kg)>> ");
    scanf("%f", &weight);

    BMI = bmi(height, weight);

    printf("BMI=%f\n", BMI);

    return (0);
}
