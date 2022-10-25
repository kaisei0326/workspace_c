#include <stdio.h>

int main(void)
{
	char moji;
	for (moji = 0x41; moji <= 0x5A; moji++){
		printf("%c", moji);
	}
	return (0);
}