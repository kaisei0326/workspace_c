#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20], str2[20];
	
	printf("������1=");
	scanf("%s", str1);
	printf("������2=");
	scanf("%s", str2);
	
	printf(strlen(str1) == strlen(str2) ? "��������" : strlen(str1) > strlen(str2) ? "������1" : "������2");
	printf("�̕�������\n");
	
	return (0);
}