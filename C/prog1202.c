#include <stdio.h>
int main(void)
{
    float sintyou;
    float taijyu;
    float tekisei;
    float bmi;
	
    printf("�g��(cm)=");
    scanf("%f", &sintyou);
	
    printf("�̏d(kg)=");
    scanf("%f", &taijyu);
	
    tekisei = (sintyou/100) * (sintyou/100) * 22;
    bmi = taijyu / ((sintyou/100) * (sintyou/100));
	
    printf("���Ȃ��̓K���̏d��%.1fkg�ł�\n", tekisei);
    printf("���Ȃ��̔얞�x(BMI)��%.1f�ł�\n", bmi);
	
    if(bmi < 20){
		printf("���Ȃ��͂₹�����ł�\n");
    }
	
	else if(bmi < 24){
		printf("���Ȃ��͕W���ł�\n");
	}
    else if(bmi < 26.5){
		printf("���Ȃ��͑���C���ł�\n");
    }
	else{
		printf("���Ȃ��͑��肷���ł�\n");
	}
    return (0);
}