#include<stdio.h>

int out4in5(int i);

int main(void)
{
	int i;
	
	printf("�����l�����");
	scanf("%d", &i);
	
	printf("%d�̒l���P�̈ʂŎl�̌ܓ������%d�ɂȂ�܂�", i, out4in5(i));
	
	return(0);
}

int out4in5(int i)
{
	if(i % 10 < 5){
		i = (i / 10) * 10;
	}
	else{
		i = (i / 10) * 10 + 10;
	}
	return(i);
}