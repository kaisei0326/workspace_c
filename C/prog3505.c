#include <stdio.h>

int main(void)
{
    int year;

    printf("����=");
	scanf("%d", &year);

    if (year % 400 == 0){
        printf("���Ƃ��͂��邤�N�ł�\n");
    }
	else if(year % 100 == 0){
		printf("���Ƃ��͂��邤�N�ł͂���܂���\n");
	}
	else if(year % 4 == 0){
		printf("���Ƃ��͂��邤�N�ł�\n");
	}
	else {
        printf("���Ƃ��͂��邤�N�ł͂���܂���\n");
	}

    return (0);
}
