#include<stdio.h>

int out4in5(int i);

int main(void)
{
	int i;
	
	printf("整数値を入力");
	scanf("%d", &i);
	
	printf("%dの値を１の位で四捨五入すると%dになります", i, out4in5(i));
	
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