#include <stdio.h>

int main(void)
{
	char str[64];
	int i;
	int fugou, seisuu;
	
	printf("•¶š—ñ=");
	scanf("%s", str);

	if(str[0] == '-'){
		fugou = -1;
		i = 1;
	}
	else if(str[0] == '+'){
		fugou = 1;
		i = 1;
	}
	else{
		fugou = 1;
		i = 1;
	}
	
	seisuu = 0;
	while(str)
	seisuu *= fugou;
	
	printf("®”=%d\n", seisuu);
	
	return 0;
}