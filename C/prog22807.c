#include <stdio.h>

typedef struct {
	char name[40];
	int score;
}SCORE;

typedef struct {
	int best;
	int worst;
	float average;
	float red_mans;
}TOUKEI;

void input_score(SCORE *s);
void get_kekka(SCORE *s, TOUKEI *i);
void print_kekka(TOUKEI *i);

int main(void)
{
	SCORE student[5];
	TOUKEI kekka;
	
	input_score(student);
	
	get_kekka(student, &kekka);
	
	print_kekka(&kekka);
	
	return (0);
}

void input_score(SCORE *s)
{
	int i;
	
	for (i = 0; i < 5; i++){
		printf("名前=");
		scanf("%s", s->name);
		printf("点数=");
		scanf("%d", &s->score);
		s++;
	}
}

void get_kekka(SCORE *s, TOUKEI *i){
	int a;
	i->best = s->score;
	i->worst = s->score;
	i->average = s->score;
	i->red_mans = 0;
	
	for (a = 0; a < 5; a++){
		if (i->best < s->score){
			i->best = s->score;
		}
		if (i->worst > s->score){
			i->worst = s->score;
		}
		i->average += s->score;
		if (s->score < 60){
			i->red_mans + 1;
		}
		
		s++;
	}
	i->average /= 5;
}

void print_kekka(TOUKEI *i){
	printf("最高点=%d\n", i->best);
    printf("最低点=%d\n", i->worst);
    printf("平均点=%f\n", i->average);
    printf("赤点%d人\n", i->red_mans);
}