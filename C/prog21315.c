#include<stdio.h>

int summerv(int month, int day);

int main(void)
{
	int month;
	int day;
	
	printf("ŒŽ:");
	scanf("%d", &month);
	
	printf("“ú:");
	scanf("%d", &day);
	
	if(summerv(month, day) == 0){
		printf("%dŒŽ%d“ú‚Í‰Ä‹x‚Ý‚Å‚·\n", month, day);
	}
	else if(summerv(month, day) < 0){
		printf("%dŒŽ%d“ú‚Í‘OŠú“ú’ö’†\n", month, day);
	}
	else{
		printf("%dŒŽ%d“ú‚ÍŒãŠú“ú’ö’†");
	}
	
	return(0);
}

int summerv(int month, int day)
{
	int i = 0;
	if(month <= 8 && day <= 20){
		i--;
	}
	else if(month >= 10){
		i++;
	}
	return(i);
}