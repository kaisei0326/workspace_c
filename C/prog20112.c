#include <stdio.h>
#include <conio.h>

int main(void)
{
    char c;

    c = '1';
    
    while (c != '0'){
        c = getch();
        switch (c){
          case 0:
            break;
            
          case '1':
            printf("ぐう\n");
            break;

          case '2':
            printf("ちょき\n");
            break;

          case '3':
            printf("ぱあ\n");
            break;

          default:
            printf("1〜3を入力してください\n");
            break;
        }
    }
        
    return (0);
}
