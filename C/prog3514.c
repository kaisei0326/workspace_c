#include <stdio.h>
#include <conio.h>

int main(void)
{
    char c;
    

    while (1){
        c = getch();
        if ((c >= 'a') && (c <= 'z')){
            c -= 0x20;
        }
        else if ((c >= 'A') && (c <= 'Z')) {
            c += 0x20;
        }

        printf("%c\n", c);
    }
    
    return (0);
}
