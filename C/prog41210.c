#include <stdio.h>

int main(void)
{
	unsigned char str[200];
	int i = 0;
	
	scanf("%s", str);
	
	while (str[i] != '\0') {
		if (str[i] == 0x82){
			if (str[i + 1] >= 0x9f && str[i + 1] <= 0xf1){
				str[i] += 0x01;
				i++;
				str[i] -= 0x5f;
				if (str[i] >= 0x7f) {
					str[i] += 0x01;
				}
			}
			else if (str[i + 1] >= 0x81 && str[i + 1] <= 0x9a) {
				i++;
				str[i] -= 0x21;
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z'){
			str[i] -= 0x20;
		}
		i++;
	}
	
	printf("%s\n", str);
	
	return (0);
}