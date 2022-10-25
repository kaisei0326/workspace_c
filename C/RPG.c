#include <stdio.h>
#include <stdlib.h>
  
struct param
{
  char name[8];
  int life, attack, defense;
};
  
void act(struct param* actor, struct param* target, int command)
{
  int point;
  switch (command)
  {
    case 0:
      point = actor->attack - target->defense;
      target->life -= point;
      printf("%s の アタック! %s に %d ダメージ!\n", actor->name, target->name, point);
      break;
    case 1:
      point = 20;
      actor->attack += point;
      printf("%s の ブースト! %s の ATKが %d あがった!\n", actor->name, actor->name, point);
      break;
    case 2:
      point = 50;
      actor->life += point;
      printf("%s の ヒール! %s は HPを %d かいふくした！!\n", actor->name, actor->name, point);
      break;
  }
}
  
int main(void)
{
  struct param you = { "you", 100, 100, 100 };
  struct param enemy = { "demon", 1000, 100, 50 };
  printf("ホイミスライム が あらわれた!\n");
  for (; ; )
  {
    int command;
    printf("あなた: HP=%d, ATK=%d, DEF=%d\n", you.life, you.attack, you.defense);
    printf("ホイミスライム: HP=%d, ATK=%d, DEF=%d\n", enemy.life, enemy.attack, enemy.defense);
    printf("(0) アタック\n(1) ブースト\n(2) ヒール\n");
    printf("コマンド:");
    scanf("%d", &command);
    act(&you, &enemy, command);
    if (enemy.life <= 0)
    {
      printf("%s を たおした!\n", enemy.name);
	  printf("YOU WIN!!\n");
      return 0;
    }
    act(&enemy, &you, rand() % 3);
    if (you.life <= 0)
    {
      printf("%s は めのまえが まっくらになった\n", you.name);
	  printf("YOU LOSE...\n");
      return 0;
    }
  }
  while(1){
  }
}
