#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int *p;
	int i;
	
	printf("�����̐�=");
	scanf("%d", &n);
	
	p = (int *)malloc(n * sizeof(int));
	
	if (p == NULL) {
		printf("malloc�Ɏ��s���܂���\n");
	}
	else {
		for (i = 0; i < n; i++){
			printf("����%d=", i + 1);
			scanf("%d", p + i);
		}
		
		for (i = 0; i < n; i++){
			printf("����%d=%d\n", i + 1, *(p + i));
		}
		free(p);
	}
	
	return (0);
}