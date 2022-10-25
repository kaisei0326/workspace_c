#include <stdio.h>
#include <string.h>

int bm_matching(char *text, char *pattern);

int main(void)
{
	char text[100];
	char pattern[20];
	int tmp;
	
	printf("テキスト=");
	scanf("%s", text);
	printf("パターン=");
	scanf("%s", pattern);
	
	tmp = bm_matching(text, pattern);
	
	if (tmp == -1) {
		printf("発見できませんでした\n");
	}
	else {
		printf("%d文字目に発見しました\n", tmp);
	}
	
	return (0);
}

int bm_matching(char *text, char *pattern)
{
	int text_pos, pat_pos;
	int skip[256];
	unsigned int i;
	
	text_pos = pat_pos = strlen(pattern) - 1;
	
	for (i = 0; i < 256; i++) {
		skip[i] = strlen(pattern);
	}
	for (i = 0; i < strlen(pattern) - 1; i++) {
		skip[pattern[i]] = strlen(pattern) - i - 1;
	}
	
	while (text[text_pos] != '\0') {
		if (text[text_pos] == pattern[pat_pos]) {
			if (pat_pos == 0) {
				return (text_pos + 1);
			}
			text_pos--;
			pat_pos--;
		}
		else {
			text_pos += skip[text[text_pos]];
			pat_pos = strlen(pattern) - 1;
		}
	}
	
	return (-1);
	
}