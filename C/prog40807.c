#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 2

int main(void)
{
	int (*p)[ROW];
	int row;
	int col;

	p = (int (*)[ROW])calloc(sizeof(int), COL * ROW);

	if (p == NULL){
		printf("calloc ‚ÉŽ¸”s‚µ‚Ü‚µ‚½\n");
	}
	else {
		for (row = 0; row < ROW; row++){
			for (col = 0; col < COL; col++){
				printf("s%d Œ…%d=", row + 1, col + 1);
				scanf("%d", &p[col][row]);
			}
		}
		for (row = 0; row < ROW; row++){
			for (col = 0; col < COL; col++){
				printf("s%d Œ…%d=%d\n", row + 1, col + 1, p[col][row]);
			}
		}
		free(p);
	}
	
	return (0);
}