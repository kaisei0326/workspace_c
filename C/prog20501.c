#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[30];
	int len;
	
	printf("•¶š—ñ>> ");
	scanf("%s", str);
	
	len = strlen(str);
	
	printf("•¶š—ñ[%s]‚Ì’·‚³‚Í[%d]‚Å‚·B\n", str, len);
	
	return (0);
}