#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int len;
	char *cp;
	
	printf("������̒���=");
	scanf("%d", &len);
	
	cp = (char *)calloc(len, sizeof(char));
	
	if (cp == NULL){
		printf("calloc�Ɏ��s���܂���\n");
	}
	else {
		printf("������=");
		scanf("%s", cp);
		
		printf("������=%s\n", cp);
		
		free(cp);
	}
	
	return (0);
}