#include <stdio.h>
int main(void)
{
    float sintyou;
    float taijyu;
    float tekisei;
    float bmi;
	
    printf("身長(cm)=");
    scanf("%f", &sintyou);
	
    printf("体重(kg)=");
    scanf("%f", &taijyu);
	
    tekisei = (sintyou/100) * (sintyou/100) * 22;
    bmi = taijyu / ((sintyou/100) * (sintyou/100));
	
    printf("あなたの適正体重は%.1fkgです\n", tekisei);
    printf("あなたの肥満度(BMI)は%.1fです\n", bmi);
	
    if(bmi < 20){
		printf("あなたはやせすぎです\n");
    }
	
	else if(bmi < 24){
		printf("あなたは標準です\n");
	}
    else if(bmi < 26.5){
		printf("あなたは太り気味です\n");
    }
	else{
		printf("あなたは太りすぎです\n");
	}
    return (0);
}