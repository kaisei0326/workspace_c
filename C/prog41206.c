#include <stdio.h>

#define KANJI_1ST(a) 0x81 <= (a) && (a) <= 0x9f || (a) <= 0xe0 && 0xef <= (a)

int main(void)
{
	unsigned char str[100];
	int i = 0;
	
	scanf("%s", str);
	
	while (str[i] != '\0') {
		if (KANJI_1ST(str[i])){
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 0x20;
		}
		i++;
	}
	
	printf("%s", str);
	
	return (0);
}