#include<stdio.h>

int main(void)
{
	char str[100];
	int a, b, c;
	
	printf("������=");
	scanf("%s", str);
	
	a = 0;
	while(str[a] != '\0'){
		a++;
	}
	a--;
	c = 0;
	for(b = 0;b<=a;b++){
		if(str[b] != str[a]){
			c++;
		}
		a--;
	}
	if(c == 0){
		printf("�񕶂ł�\n");
	}
	else{
		printf("�񕶂ł͂���܂���\n");
	}
	return 0;
}