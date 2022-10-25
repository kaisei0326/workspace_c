#include <stdio.h>

int main(void)
{
	unsigned char str[100];
	int i = 0;
	
	scanf("%s", str);
	
	while (str[i] != '\0'){
		if (str[i] == 0x82){
			i++;
			if (str[i] >= 0x60 && str[i] <= 0x79){
				str[i] += 0x21;
			}
		}
		i++;
	}
	printf("%s\n", str);
	
	return (0);
}