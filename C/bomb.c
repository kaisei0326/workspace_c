#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 20 		//ƒ}ƒX–Ú‚ÌŽw’è
#define BOMB 40

int main(void)
{
	int bomb[MAX][MAX];		//Žü‚è‚É”š’e‚ª‚¢‚­‚Â‚ ‚é‚©“ü‚ê‚é”z—ñ
	int map[MAX][MAX];		//”š’e‚ð“ü‚ê‚é”z—ñ
	char block[MAX][MAX];	//”š’e‚ð‰B‚·‚½‚ß‚Ì”z—ñ
	int bombnum = BOMB;
	int i;
	int j;
	int x, y;
	
	for (i = 0; i < MAX; i++){		//‰Šú‰»
		for (j = 0; j < MAX; j++){
			bomb[i][j] = 0;
		}
	}
	
	srand((unsigned)time(NULL));			//		ƒRƒR‚ç‚Ö‚ñ‚Í”š’e‚ð—”
	for (i = 0; i < MAX; i++){				//		‚ð”­¶‚³‚¹‚Ämap‚É
		for (j = 0; j < MAX; j++){			//		‘ã“ü‚µ‚Ä‚¢‚é
			map[i][j] = rand() % 2;			//		G‚ç‚È‚¢‚Å
			bombnum--;
		}
	}
	
	for (i = 0; i < MAX; i++){
		for (j = 0; j < MAX; j++){
			block[i][j] = 'O';
		}
		printf("\n");
	}
	
	for (i = 0; i < MAX; i++){												//”š’e‚ª‚¢‚­‚Â‚ ‚é‚©‚ð”‚¦‚ÄAbomb”z—ñ‚Éî•ñ‚ð’Ç‰Á
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
		printf("À•W‚ðŽw’è‚µ‚Ä‚­‚¾‚³‚¢ x:");
		scanf("%d", &x);
		printf("À•W‚ðŽw’è‚µ‚Ä‚­‚¾‚³‚¢ y:");
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
