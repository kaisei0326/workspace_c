#include <stdio.h>

int main(void)
{
	char c;
	
	while (1){
		scanf("%c", &c);
		if ((c >= 'a') && (c <= 'z')){
		c -= 0x20;
	}
	else if ((c >= 'A') && (c <= 'Z')) {
		c += 0x20;
		
	}
		printf("%c\n", c);
	}
	return (0);
}