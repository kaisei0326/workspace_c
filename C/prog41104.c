#include <stdio.h>

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
		if (0x81 <= str[i] && str[i] <= 0x9f || str[i] <= 0xe0 && 0kaxef <= str[i]){
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