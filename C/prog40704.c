#include <stdio.h>

int main(void)
{
	unsigned int i1, i2, anc;
	
	printf("16êiêî1=");
	scanf("%x", &i1);
	printf("16êiêî2=");
	scanf("%x", &i2);
	
	anc = (i1 & ~i2) | (~i1 & i2);
	
	printf("%x XOR %x = %x\n", i1, i2, anc);
	
	return (0);
}