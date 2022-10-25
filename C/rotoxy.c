#include <stdio.h>
#include <conio.h>

int main(void)
{
	int x;
	int y;
	char c;
	int i;

	x = 40;
	y = 12;

	gotoxy(x, y);
	printf("o");

	while (1){
		if (kbhit() != 0){
			gotoxy(x, y);
			printf(" ");

			c = getch();
			switch (c){
			  case 'w':
				if (y > 1){
					y--;
				}
				break;

			  case 's':
				if (y < 24){
					y++;
				}
				break;

			  case 'a':
				if (x > 1){
					x--;
				}
				break;

			  case 'd':
				if (x < 80){
					x++;
				}
				break;
			}
		gotoxy(x, y);
		printf("o");
		}
	}

	return (0);
}