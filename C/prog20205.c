#include<stdio.h>

int main(void)
{
	char st[100];
	int len;
	printf("���������͂��Ă��������F");
	scanf("%s", st);
	len = 0;
	while (st[len] != '\0'){
		len++;
	}
	printf("������%s �̒�����%d �ł��B\n", st, len);
	return (0);
}