#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 20

int main(void)
{
	int i;
	int n;
	char *str[20];
	
	printf("������=");
	scanf("%d", &n);
	
	str = (char *)malloc(n * MAX_LEN * sizeof(char));
	
	if (str == NULL){
		printf("malloc�Ɏ��s���܂���\n");
	}
	else {
		for (i = 0; i < n; i++){
			printf("������%d=", i++);
			scanf("%s", str[i]);
		}
		