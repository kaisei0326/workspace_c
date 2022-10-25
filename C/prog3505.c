#include <stdio.h>

int main(void)
{
    int year;

    printf("西暦=");
	scanf("%d", &year);

    if (year % 400 == 0){
        printf("ことしはうるう年です\n");
    }
	else if(year % 100 == 0){
		printf("ことしはうるう年ではありません\n");
	}
	else if(year % 4 == 0){
		printf("ことしはうるう年です\n");
	}
	else {
        printf("ことしはうるう年ではありません\n");
	}

    return (0);
}
