#include <stdio.h>

int main(void){
	char str[100];
	char str2[100];
	
	int a, b, c;
	a = 0;
	b = 0;
	c = 0;
	
	printf("•¶Žš—ñ");
	scanf("%s", str1);
	
	while(str1[a] != '\0'){
		++a;
	}
	--a;
	while(a >= 0){
		str2[b] = str1[a];
		if(str1[b] != str2[b]){
			++c;
		}
		--a;
		++b;
		
	}
	if(c == 0){
		printf("‰ñ•¶‚Å‚·\n");
	}
	else{
		printf("‰ñ•¶‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n");
	}
	
	
	return 0;
}