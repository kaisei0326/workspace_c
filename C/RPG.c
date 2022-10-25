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
      printf("%s �� �A�^�b�N! %s �� %d �_���[�W!\n", actor->name, target->name, point);
      break;
    case 1:
      point = 20;
      actor->attack += point;
      printf("%s �� �u�[�X�g! %s �� ATK�� %d ��������!\n", actor->name, actor->name, point);
      break;
    case 2:
      point = 50;
      actor->life += point;
      printf("%s �� �q�[��! %s �� HP�� %d �����ӂ������I!\n", actor->name, actor->name, point);
      break;
  }
}
  
int main(void)
{
  struct param you = { "you", 100, 100, 100 };
  struct param enemy = { "demon", 1000, 100, 50 };
  printf("�z�C�~�X���C�� �� �����ꂽ!\n");
  for (; ; )
  {
    int command;
    printf("���Ȃ�: HP=%d, ATK=%d, DEF=%d\n", you.life, you.attack, you.defense);
    printf("�z�C�~�X���C��: HP=%d, ATK=%d, DEF=%d\n", enemy.life, enemy.attack, enemy.defense);
    printf("(0) �A�^�b�N\n(1) �u�[�X�g\n(2) �q�[��\n");
    printf("�R�}���h:");
    scanf("%d", &command);
    act(&you, &enemy, command);
    if (enemy.life <= 0)
    {
      printf("%s �� ��������!\n", enemy.name);
	  printf("YOU WIN!!\n");
      return 0;
    }
    act(&enemy, &you, rand() % 3);
    if (you.life <= 0)
    {
      printf("%s �� �߂̂܂��� �܂�����ɂȂ���\n", you.name);
	  printf("YOU LOSE...\n");
      return 0;
    }
  }
  while(1){
  }
}
