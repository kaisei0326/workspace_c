#include <stdio.h>

#define KANJI_1ST(a) (0x81 <= (a) && (a) <= 0x9f || (a) <= 0xe0 && 0xef <= (a))

int main(void)
{
	unsigned char str[100];
	int han = 0, zen = 0;
	int i = 0;
	
	scanf("%s", str);
	
	while (str[i] != '\0') {
		if (KANJI_1ST(str[i])){
			zen++;
			i++;
		}
		else {
			han++;
		}
		i++;
	}
	printf("”¼Šp=%d\n‘SŠp=%d\n", han, zen);
	
	return (0);
}