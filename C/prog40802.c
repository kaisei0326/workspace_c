#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	char *p;
	
	printf("������̒���=");
	scanf("%d", &n);
	
	p = (char *)malloc(n * sizeof(char));
	
	if (p == NULL){
		printf("malloc�Ɏ��s���܂���\n");
	}
	else {
		printf("������=");
		scanf("%s", p);
		
		printf("������=%s\n", p);
		
		free(p);
	}
	
	return (0);
}