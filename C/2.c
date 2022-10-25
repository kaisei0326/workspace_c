#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[100], t[100];
	int a;
	char x;
	scanf("%s", s);
	scanf("%s", t);
	
	for(a = strlen(s); a < 1; a--){
		if(s[a] < s[a-1]){
			x = s[a];
			s[a] = s[a-1];
			s[a-1] = x;
		}
	}
	for(a = strlen(t); a < 1; a--){
		if(t[a] < t[a-1]){
			x = t[a];
			t[a] = t[a-1];
			t[a-1] = x;
		}
	}
	printf("%s\n%s\n", s, t);
}