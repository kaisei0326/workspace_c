#include <stdio.h>
#include <string.h>

int bm_matching(char *text, char *pattern);

int main(void)
{
    char text[100];
    char pattern[20];
    char index;
    
    
    printf("•¶š—ñ=");
    scanf("%s", text);
    
    printf("ƒpƒ^[ƒ“=");
    scanf("%s", pattern);
    
    index = bm_matching(text, pattern);
    
    if (index == 0){
        printf("”­Œ©‚Å‚«‚Ü‚¹‚ñ‚Å‚µ‚½\n");
    }
    else {
        printf("%d•¶š–Ú‚É”­Œ©‚µ‚Ü‚µ‚½\n", index);
    }
    
    return (0);
}

int bm_matching(char *text, char *pattern)
{
	unsigned int skip[256];
	unsigned int i;
	int text_pos, pat_pos;
	
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
			if (skip[text[text_pos]] > (strlen(pattern)- pat_pos)) {
				text += skip[text[text_pos]];
			}
			else {
				text_pos += (strlen(pattern) - pat_pos);
			}
			pat_pos = strlen(pattern) - 1;
		}
	}
	
	return (0);
}