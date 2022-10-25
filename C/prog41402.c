#include <stdio.h>
#include <string.h>

int matching(char *text, char *pattern);

int main(void)
{
	char str[100];
	char match[100];
	
	printf("テキスト=");
	scanf("%s", str);
	printf("パターン=");
	scanf("%s", match);
	
	if (matching(str, match) == -1) {
		printf("発見できませんでした\n");
	}
	else {
		printf("%d文字目に発見しました\n", matching(str, match));
	}
	
	return (0);
}

int matching(char *text, char *pattern)
{
	int text_pos, pat_pos;
	text_pos = pat_pos = strlen(pattern) - 1;
	
	while (text[text_pos] != '\0') {
		if (text[text_pos] == pattern[pat_pos]) {
			if (pat_pos == 0) {
				return (text_pos + 1);
			}
			text_pos--;
			pat_pos--;
		}
		else {
			text_pos += (strlen(pattern) - pat_pos);
			pat_pos = strlen(pattern) - 1;
		}
	}
	
	return (-1);
}