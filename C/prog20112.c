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
            printf("‚®‚¤\n");
            break;

          case '2':
            printf("‚¿‚å‚«\n");
            break;

          case '3':
            printf("‚Ï‚ \n");
            break;

          default:
            printf("1`3‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
            break;
        }
    }
        
    return (0);
}
