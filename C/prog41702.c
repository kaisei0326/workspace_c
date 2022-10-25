#include <stdio.h>

typedef struct {
	char name[20];
	int win;
	int lose;
	int tie;
	int score;
}KEKKA;

int main(void)
{
	int i, a;
	KEKKA team[10];
	KEKKA tmp;
	int flag = 1;
	
	scanf("%d", &i);
	
	for (a = 0; a < i; a++) {
		scanf("%s %d %d %d", team[a].name, &team[a].win, &team[a].lose, &team[a].tie);
		team[a].score = team[a].win * 3 + team[a].tie;
	}
	
	while (flag != 0) {
		flag = 0;
		for (a = 0; a < i - 1; a++) {
			if (team[a].score < team[a + 1].score) {
				tmp = team[a];
				team[a] = team[a + 1];
				team[a + 1] = tmp;
				flag = 1;
			}
		}
	}
	
	for (a = 0; a < i; a++) {
		printf("%s, %d\n", team[a].name, team[a].score);
	}
	
	return (0);
}