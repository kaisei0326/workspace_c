#include<stdio.h>

void copy(char saki[], char moto[]);

int main(void)
{
	char str1[100];
	char str2[100];
	
	printf("������1=");
	scanf("%s", str1);
	
	copy(str2, str1);
	
	printf("�R�s�[������=%s\n", str2);
	
	return(0);
}

void copy(char saki[], char moto[])
{
	int i = 0;
	
	while(moto[i] != '\0'){
		saki[i] = moto[i];
		i++;
	}
	saki[i] = '\0';
}