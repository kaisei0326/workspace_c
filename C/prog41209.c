#include <stdio.h>

int main(void)
{
	unsigned char str[100];
	int i = 0;
	
	scanf("%s", str);
	
	while (str[i] != '\0'){
		if (str[i] == 0x82){
			str[i] += 0x01;
			i++;
			if (str[i] >= 0x9f && str[i] <= 0xf1){
				str[i] -= 0x5f;
				if (str[i] >= 0x7f) {
					str[i] += 0x01;
				}
			}
		}
		i++;
	}
	printf("%s\n", str);
	
	return (0);
}