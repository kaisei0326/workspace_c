#include <stdio.h>

int main(void)
{
	int N;
	char S[100];
	char str1[100], str2[100];
	int a, b, c, d = 0;
	int _anc = 0, anc = 0;
	
	scanf("%d", &N);
	scanf("%s", S);
	
	for (a = 1; a < N; a++){
		for (b = 0; b < a; b++){
			str1[b] = S[b];
		}
		for (c = a; c < S; c++){
			str2[d] = S[c];
			d++;
		}
	}
	for (a = 0; a < N; a++){
		if (str1[a] == str2[a]) _anc += 1;
	}
	for (a = 0; a < 0; a++){
		if (_anc > anc) anc = _anc;
	}
	
	printf("%d\n", anc);
	
	return (0);
}