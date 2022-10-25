#include<stdio.h>

int seisuu(char c[]);
int suuji(char c[]);
void SuujiInput(int i, char c[]);

int main(void)
{
	char str1[100];
	char str2[100];
	int goukei;
	

	SuujiInput(1, str1);
	SuujiInput(2, str2);
	
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

int suuji(char c[])
{
	int i = 0;
	
	while(c[i] != '\0'){
		if(c[i] < '0' || c[i] > '9'){
			return(0);
		}
		i++;
	}
	
	return(1);
}

void SuujiInput(int i,char c[])
{
	if(i == 1){
			while(1){
		printf("•¶Žš—ñ1=");
		scanf("%s", c);
		if(suuji(c) == 1){
			break;
		}
			}
	}
	if(i == 2){
		while(1){
			printf("•¶Žš—ñ2=");
			scanf("%s", c);
			if(suuji(c) == 1){
				break;
			}
		}
	}
}