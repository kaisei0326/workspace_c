#include <stdio.h>

int matching(char *text, char *pattern);

int main(void)
{
	char str[100];
	char match[100];
	
	printf("�e�L�X�g=");
	scanf("%s", str);
	printf("�p�^�[��=");
	scanf("%s", match);
	
	if (matching(str, match) == -1) {
		printf("�����ł��܂���ł���\n");
	}
	else {
		printf("%d�����ڂɔ������܂���\n", matching(str, match));
	}
	
	return (0);
}

int matching(char *text, char *pattern)
{
	int text_pos = 0, pat_pos = 0;
	
	while (text[text_pos] != '\0' && pattern[pat_pos] != '\0') {
		if (text[text_pos + pat_pos] == pattern[pat_pos]) {
			pat_pos++;
		}
		else {
			text_pos++;
			pat_pos = 0;
		}
	}
	if (pattern[pat_pos] == '\0') {
		return (text_pos + 1);
	}
	
	return (-1);
}