#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 2

int main(void)
{
	int (*p)[ROW];
	int row;
	int col;
	
	p = (int (*)[ROW])malloc(COL * ROW * sizeof(int));
	
	if (p == NULL){
		printf("malloc�Ɏ��s���܂���\n");
	}
	else {
		for (row = 0; row < ROW; row++){
			for (col = 0; col < COL; col++){
				printf("�s%d ��%d=", row++, col++);
				scanf("%d", &p[col][row]);
			}
		}
		
		for (row = 0; row < ROW; row++){
			for (col = 0; col < COL; col++){
				printf("�s%d ��%d\n", row++, col++, p[col][row]);
			}
		}
		
		free(p);
	}
	
	return (0);
}