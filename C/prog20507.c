#include<stdio.h>

int main()
{
	char str[100];
	int a;
	int b;
	
	printf("������=");
	scanf("%s", str);
	
	a = 0;
	b = 0;
	while(str[a] != '\0'){
		if(b <= str[a]){
			b = str[a];
		}
		a++;
	}
	printf("�ő�̐���=%c\n", b);
	return(0);
}