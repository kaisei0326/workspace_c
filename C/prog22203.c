#include <stdio.h>

int main(void)
{
	int a[3];
	int i;

	for (i = 0; i < 3; i++){
		printf("a[%d]‚ÌƒAƒhƒŒƒX=%p\n", i, &a[i]);
	}
	
	return (0);
}