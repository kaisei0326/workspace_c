#include <stdio.h>

#define KANJI_1ST(a) 0x81 <= (a) && (a) <= 0x9f || (a) <= 0xe0 && 0xef <= (a)

int main(void)
{
	unsigned char str[100];
	int num;
	int i;
	
	printf("•¶Žš—ñ=");
	scanf("%s", str);
	
	i = 0;
	num = 0;
	while (str[i] != '\0'){
		if (KANJI_1ST(str[i])){
			i += 2;
		}
		else {
			i++;
		}
		num++;
	}
	printf("•¶Žš—ñ=%d\n", num);
	
	return (0);
}