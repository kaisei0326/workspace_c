#include<stdio.h>

int heisei(int i);
void tate(int j);

int main(void)
{
	int x, i;
	
	i = heisei(x);
	;	
	printf("���� : ");
	scanf("%d", &x);
	
	printf("��\n��\n");
	
	if(i >= 20){
		tate(i / 10);
		printf("�\\n");
	}
	else if(i >= 10){
		printf("�\\n");
	}
	tate(i % 10);
	
	printf("�N\n");
	
	return(0);
}

int heisei(int i)
{
	int n;
	n = i - 1989 + 1;
	return(n);
}

void tate(int j){
	switch(j){
	  case 1:
        printf("��\n");
        break;
      case 2:
        printf("��\n");
        break;
      case 3:
        printf("�O\n");
        break;
      case 4:
        printf("�l\n");
        break;
      case 5:
        printf("��\n");
        break;
      case 6:
        printf("�Z\n");
        break;
      case 7:
        printf("��\n");
        break;
      case 8:
        printf("��\n");
        break;
      case 9:
        printf("��\n");
        break;
    }
}