#include<stdio.h>

int nagasa(char mojiretsu[]);

int main(void)
{
	char str[100];
	int len;
	
	printf("������=");
	scanf("%s", str);
	
	len = nagasa(str);
	
	printf("����=%d\n", len);
	
	return(0);
}

int nagasa(char mojiretsu[])
{
	int i;
	
	i = 0;
	while(mojiretsu[i] != '\0'){
		i++;
	}
	
	return(i);
}