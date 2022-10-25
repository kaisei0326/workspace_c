#include<stdio.h>

int main()
{
	char str1[100];
	char str2[100];                 //Žg‚í‚È‚¢
	int a, b, c;
	int k;                          //Žg‚í‚È‚¢
	
	a = 0;
	b = 0;
	c = 0;
	
	printf("•¶Žš—ñ=");
	scanf("%s", str1);
	
	while(str1[a] != '\0'){
		a++;
	}
	--a;
	for(b = 0;b < a;++b){
		if(str1[a] != str1[b]){
			++c;
		}
		--a;
	}
	
/*	while(str2[b] != '\0'){
		for(k = a - 1;k >= 0;--k){
			str2[b] = str1[k];
			b++;
		}
	}  */
	
	if(c == 0){
		printf("‰ñ•¶‚Å‚·\n");
	}
	else {
		printf("‰ñ•ª‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n");
	}
	
	return(0);
}