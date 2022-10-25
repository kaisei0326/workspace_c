#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int guusu;
	
	guusu = 0;
    
    printf("”’l1=");
    scanf("%d", &num1);
    
    printf("”’l2=");
    scanf("%d", &num2);

    
    if ((num1 % 2) == 0){
        guusu++;
    }
    if ((num2 % 2) == 0){
        guusu++;
    }
    
    switch (guusu){
      case 0:
        printf("—¼•û‚ªŠï”‚Å‚·\n");
        break;
    
      case 1:
        printf("•Ğ•û‚ª‹ô”‚Å‚·\n");
        break;

      case 2:
        printf("—¼•û‚ª‹ô”‚Å‚·\n");
        break;
    }
    
    return (0);
}