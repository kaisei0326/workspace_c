#include<stdio.h>

int seisuu(char c[]);

int main(void)
{
	char str1[100];
	char str2[100];
	int goukei;
	
	printf("•¶š—ñ1=");
	scanf("%s", str1);
	printf("•¶š—ñ2=");
	scanf("%s", str2);
	goukei = seisuu(str1) + seisuu(str2);
	
	printf("%s + %s = %d\n", str1, str2, goukei);
	
return (0);
}

int seisuu(char c[])
{
	int i;
	int n;
	
	i = 0;
	n = 0;
	while(c[i] != '\0'){
		n = n * 10 + (c[i] - '0');
		i++;
	}
	
	return(n);
}