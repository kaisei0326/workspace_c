#include<stdio.h>

int main(void)
{
	char str[100];
	int a, b, c;
	
	printf("������=");
	scanf("%s", str);
	
	a = 0;
	b = 0;
	c = 0;
	while(str[a] != '\0'){
		if((str[a] >= 'A') && (str[a] <= 'Z')){
			b += 1;
		}
		else if((str[a] >= 'a') && (str[a] <= 'z')){
			c += 1;
		}
		a++;
	}
	printf("�啶����%d����\n", b);
	printf("��������%d����\n", c);
	return(0);
}