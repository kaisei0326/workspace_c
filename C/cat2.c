#include <stdio.h>
#include <conio.h>

int main(void)
{
    int x;
    int y;
    int dx;
    int dy;
    int i;
    int j;
    
    x = 40;
    y = 13;
    dx = 1;
    dy = 1;
    
    while (1){
		
        gotoxy(x, y);
        printf("                                ");
        gotoxy(x, y + 1);
        printf("                           		");
        gotoxy(x, y + 2);
        printf("                   			    ");
		gotoxy(x, y + 3);
        printf("           				        ");
		gotoxy(x, y + 4);
        printf("                          	    ");
		gotoxy(x, y + 5);		
        printf("                  				");
		gotoxy(x, y + 6);
        printf("                 				");
		gotoxy(x, y + 7);
		printf("                  				");
		
		
        if (x == 80){
            dx = -1;
        }
        else if (x == 1){
            dx = 1;
        }
        x += dx;
        
        if (y == 24){
            dy = -1;
        }
        else if (y == 1){
            dy = 1;
        }
        y += dy;
        
        gotoxy(x, y);
        printf("�@�@�@�_�@�@�^");
        gotoxy(x, y + 1);
        printf("���������_�^��������");
        gotoxy(x, y + 2);
        printf("��������������������");
		gotoxy(x, y + 3);
        printf("�����@ �@�@�@�@ ������");
		gotoxy(x, y + 4);
        printf("���� �@�� �@�@�@  ����");
		gotoxy(x, y + 5);
        printf("�����@�@�@ �� �@�@����");
		gotoxy(x, y + 6);
        printf("��������������������");
		gotoxy(x, y + 7);
		printf("��������������������");
    
        for (i = 0; i < 1000; i++){
            for (j = 0; j < 100000; j++);
        }
    }
    return (0);
}