#include<stdio.h>

float kai(int k);

int main(void)
{
	int i;
	
	printf("�����l����� : ");
	scanf("%d", &i);
	
	printf("%d�̊K���%.0f�ɂȂ�܂�\n", i, kai(i));
	
	return(0);
}

float kai(int k)
{
	float l;
	
	if(k == 1){
		return(1);
	}
	l = kai(k - 1) * k;
	
	return(l);
}