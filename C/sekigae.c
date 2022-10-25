#include <stdio.h>
#include <conio.h>

int main(void)
{
	int student_no;
	int seat_no;
	int seat[41];
	int i;
	int key_hit;

	for (i = 0; i < 41; i++){
	seat[i] = 0;
}

	seat_no = 0;

	for (student_no = 1; student_no <= 41; student_no++){
		printf("oÈ”Ô†:%d\n", student_no);

		key_hit = 0;
		while (key_hit == 0){
			if (seat[seat_no] == 0){
				printf("È”Ô†=%2d\r", seat_no + 1);
				if (kbhit() != 0){
					getch();
					printf("\n\n");
					seat[seat_no] = student_no;
					key_hit = 1;
				}
			}
				seat_no ++;
				if (seat_no >= 41){
					seat_no = 0;
				}
		}
	}

	for (seat_no = 0; seat_no < 41; seat_no++){
		printf("È”Ô†:%2d==>oÈ”Ô†:%d\n", seat_no + 1, seat[seat_no]);
}

return (0);
}