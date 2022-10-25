#include <stdio.h>

int main(void)
{
	int x[3];
	int *p[3];
	int a;
	
	for (a = 0; a < 3; a++){
		p[a] = &x[a];
		*p[a] = 100 * a + 100;
		printf("x[%d]=%d\n", a, x[a]);
	}
	
	return (0);
}