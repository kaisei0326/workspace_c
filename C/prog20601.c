#include <stdio.h>

int main(void)
{
	char str[100];
	char str2[100];
	int i;
	
	printf("文字列=");
	scanf("%s", str);
	
	i = 0;
	while (str[i] != '\0'){
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	printf("コピーした文字列=%s\n", str2);
return (0);
}