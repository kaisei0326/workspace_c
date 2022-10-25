#include <stdio.h>

int main(void)
{
	char str[100];
	int a;
	a = 0;
	
	printf("•¶š—ñ=");
	scanf("%s", str);
	while(str[a] != '\0'){
		if(str[a] == 'z'){
			str[a] = 'a';
		}
		else{
			str[a] += 1;
		}
		a++;
	}
	printf("ˆÃ†=%s\n", str);
	return 0;
	
}