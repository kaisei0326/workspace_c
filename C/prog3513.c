#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int guusu;
	
	guusu = 0;
    
    printf("���l1=");
    scanf("%d", &num1);
    
    printf("���l2=");
    scanf("%d", &num2);

    
    if ((num1 % 2) == 0){
        guusu++;
    }
    if ((num2 % 2) == 0){
        guusu++;
    }
    
    switch (guusu){
      case 0:
        printf("��������ł�\n");
        break;
    
      case 1:
        printf("�Е��������ł�\n");
        break;

      case 2:
        printf("�����������ł�\n");
        break;
    }
    
    return (0);
}