#include<stdio.h>

int main()
{
	char str[3];
	int n;
	
	printf("�Q���̐���=");
	scanf("%s", n);
	
	if (n / 10 == 0){
		str[0] = ' ';
	}
	else {
		str[0] = n / 10 + '0';
	}
	
	str[1] = n % 10 + '0';
	str[2] = '\0';
	printf("�Q���̐����i������j=%s\n", str);
	
	return(0);
}