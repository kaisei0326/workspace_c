#include <stdio.h>

#define KANJI_1ST(a) 0x81 <= (a) && (a) <= 0x9f || (a) <= 0xe0 && 0xef <= (a)

int main(void)
{
	unsigned char str[100];
	int i;
	int ascii;
	int kanji;
	
	printf("������=");
	scanf("%s", str);
	
	i = 0;
	ascii = 0;
	kanji = 0;
	while (str[i] != '\0'){
		if (KANJI_1ST(str[i])){
			i++;
			kanji++;
		}
		else {
			ascii++;
		}
		i++;
	}
	printf("���p=%d ����\n", ascii);
	printf("�S�p=%d ����\n", kanji);
	
	return (0);
}