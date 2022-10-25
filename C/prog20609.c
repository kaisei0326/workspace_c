#include<stdio.h>

int main()
{
	char str[3];
	int n;
	
	printf("‚QŒ…‚Ì®”=");
	scanf("%s", n);
	
	if (n / 10 == 0){
		str[0] = ' ';
	}
	else {
		str[0] = n / 10 + '0';
	}
	
	str[1] = n % 10 + '0';
	str[2] = '\0';
	printf("‚QŒ…‚Ì®”i•¶š—ñj=%s\n", str);
	
	return(0);
}