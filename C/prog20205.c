#include<stdio.h>

int main(void)
{
	char st[100];
	int len;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s", st);
	len = 0;
	while (st[len] != '\0'){
		len++;
	}
	printf("•¶š—ñ%s ‚Ì’·‚³‚Í%d ‚Å‚·B\n", st, len);
	return (0);
}