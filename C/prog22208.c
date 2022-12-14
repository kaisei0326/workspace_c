#include <stdio.h>

void input_date(int *year, int *month, int *day);
void next_day(int *year, int *month, int *day);
int lastday(int year, int month);
int leapyear(int year);

int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void)
{
    int year;
    int month;
    int day;

    input_date(&year, &month, &day);
    next_day(&year, &month, &day);

    printf("次の日は%d年%d月%d日です\n", year, month, day);

    return (0);
}

void input_date(int *year, int *month, int *day)
{
    printf("年=");
    scanf("%d", year);
    
    printf("月=");
    scanf("%d", month);
    
    printf("日=");
    scanf("%d", day);
}

void next_day(int *year, int *month, int *day)
{
    if (*day == lastday(*year, *month)){
		*day = 1;
        (*month)++;
        if (*month > 12){
            *month = 1;
            (*year)++;
        }
    }
    else {
        (*day)++;
    }
}

int leapyear(int year)
{
    if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))){
        return (1);
    }
    return (0);
}

int lastday(int year, int month)
{
    if (leapyear(year) == 1 && month == 2){
        return (29);
    }
    
    return (days[month - 1]);
}
