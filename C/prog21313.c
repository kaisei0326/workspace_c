#include<stdio.h>

float kai(int i);

int main(void)
{
	int i;
	
	printf("�����l�����");
	scanf("%d", &i);
	
	printf("%d�̊K���%.0f�ɂȂ�܂�\n", i, kai(i));
	
	return(0);
}

float kai(int i)
{
	int j;
	float k=1;
	
	for(j = 1;j <= i;j++){
		k *= j;
	}
	return(k);
}