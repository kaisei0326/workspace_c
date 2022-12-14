#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 20 		//マス目の指定
#define BOMB 40

int main(void)
{
	int bomb[MAX][MAX];		//周りに爆弾がいくつあるか入れる配列
	int map[MAX][MAX];		//爆弾を入れる配列
	char block[MAX][MAX];	//爆弾を隠すための配列
	int bombnum = BOMB;
	int i;
	int j;
	int x, y;
	
	for (i = 0; i < MAX; i++){		//初期化
		for (j = 0; j < MAX; j++){
			bomb[i][j] = 0;
		}
	}
	
	srand((unsigned)time(NULL));			//		ココらへんは爆弾を乱数
	for (i = 0; i < MAX; i++){				//		を発生させてmapに
		for (j = 0; j < MAX; j++){			//		代入している
			map[i][j] = rand() % 2;			//		触らないで
			bombnum--;
		}
	}
	
	for (i = 0; i < MAX; i++){
		for (j = 0; j < MAX; j++){
			block[i][j] = 'O';
		}
		printf("\n");
	}
	
	for (i = 0; i < MAX; i++){												//爆弾がいくつあるかを数えて、bomb配列に情報を追加
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
		printf("座標を指定してください x:");
		scanf("%d", &x);
		printf("座標を指定してください y:");
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
