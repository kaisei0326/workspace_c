#include<stdio.h>

void printn(char str[], int kaisuu);

int main(void)
{
	char str[100];
	int kaisuu;
	
	printf("������=");
	scanf("%s", str);
	printf("��=");
	scanf("%d", &kaisuu);
	
	printn(str, kaisuu);
	
	return(0);
}

void printn(char str[], int kaisuu)
{
	while(kaisuu != 0){
		printf("%s\n", str);
		kaisuu--;
	}
}