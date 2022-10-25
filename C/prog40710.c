#include <stdio.h>

int main(void)
{
	int i, j = 0, ave = 0;
	while(i != -1){
		scanf("%d", &i);
		j++;
		ave += i;
	}
	
	printf("%f\n", (float)((ave + 1) / (j + 1)));
	
	return (0);
}