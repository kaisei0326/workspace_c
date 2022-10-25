#include<stdio.h>

int main()
{
	char str[10];
	int n;
	int i;
	printf("®”i•¶š—ñj=");
	scanf("%s", str);
	n = 0;
	i = 0;
	while (str[i] != '\0'){
		n = n * 10 + (str[i] - '0');
		i++;
	}
	printf("®”=%d\n", n);
	return(0);
}