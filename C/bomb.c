#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 20 		//�}�X�ڂ̎w��
#define BOMB 40

int main(void)
{
	int bomb[MAX][MAX];		//����ɔ��e���������邩�����z��
	int map[MAX][MAX];		//���e������z��
	char block[MAX][MAX];	//���e���B�����߂̔z��
	int bombnum = BOMB;
	int i;
	int j;
	int x, y;
	
	for (i = 0; i < MAX; i++){		//������
		for (j = 0; j < MAX; j++){
			bomb[i][j] = 0;
		}
	}
	
	srand((unsigned)time(NULL));			//		�R�R��ւ�͔��e�𗐐�
	for (i = 0; i < MAX; i++){				//		�𔭐�������map��
		for (j = 0; j < MAX; j++){			//		������Ă���
			map[i][j] = rand() % 2;			//		�G��Ȃ���
			bombnum--;
		}
	}
	
	for (i = 0; i < MAX; i++){
		for (j = 0; j < MAX; j++){
			block[i][j] = 'O';
		}
		printf("\n");
	}
	
	for (i = 0; i < MAX; i++){												//���e���������邩�𐔂��āAbomb�z��ɏ���ǉ�
		for (j = 0; j < MAX; j++){
			if (map[i][j] == 1){				
				if (i-1 >= 0 && map[i-1][j] == 0)bomb[i-1][j]++;
				if (i+1 < MAX && map[i+1][j] == 0)bomb[i+1][j]++;
				if (j-1 >= 0 && map[i][j-1] == 0)bomb[i][j-1]++;
				if (j+1 < MAX && map[i][j+1] == 0)bomb[i][j+1]++;
				if (i-1 >= 0 && j-1 >= 0 && map[i-1][j-1] == 0)bomb[i-1][j-1]++;
				if (i-1 >= 0 && j+1 < MAX && map[i-1][j+1] == 0)bomb[i-1][j+1]++;
				if (i+1 < MAX && j-1 >= 0 && map[i+1][j-1] == 0)bomb[i+1][j-1]++;
				if (i+1 < MAX && j+1 < MAX && map[i+1][j+1] == 0)bomb[i+1][j+1]++;
			}
		}
	}
	
	for (i = 0; i < MAX; i++){
		for (j = 0; j < MAX; j++){
			printf("%d", bomb[i][j]);
		}
		printf("\n");
	}
	
/*	while (1){
		printf("���W���w�肵�Ă������� x:");
		scanf("%d", &x);
		printf("���W���w�肵�Ă������� y:");
		scanf("%d", &y);
		
		if (map[y][x] == 1)printf("YOU ARE DIED!!\n");
		else {
			block[y][x] = '0' + bomb[y][x];
		}
		for (i = 0; i < MAX; i++){
			for (j = 0; j < MAX; j++){
				printf("%d", block[i][j]);
			}
			printf("\n");
		}
	}*/
	
	return (0);
}
