#include <stdio.h>

int main(void)
{
	signed char sc;
	unsigned char uc;
	int i;
	
	sc = uc = 0;
	
	for (i = 0; i < 256; i++){
		printf("%d %d\n", sc++, uc++);
	}
	
	return (0);
}