#include <stdio.h>

int main(void)
{
	unsigned char str[100];
	int num;
	int i;
	
	printf("•¶Žš—ñ=");
	scanf("%s", str);
	
	i = 0;
	num = 0;
	while (str[i] != '\0'){
		if (0x81 <= str[i] && str[i] <= 0x9f || str[i] <= 0xe0 && 0xef <= str[i]){
			i += 2;
		}
		else {
			i++;
		}
		num++;
	}
	printf("•¶Žš—ñ=%d\n", num);
	
	return (0);
}