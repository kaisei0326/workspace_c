#include <stdio.h>

int main(void)
{
    int   i;
    int   a[10];
    int   sum;
    float heikin;
    int   n;
    
	sum = 0;
	heikin = sum / 10;
	n = 0;

    for (i = 0; i < 10; i++){
        printf("®”=");
        scanf("%d", &a[i]);
		sum += a[i];
		heikin = sum / 10;
		if (a[i] > heikin){
            n++;
        }
    }
    


    printf("•½‹Ï’l‚æ‚è‘å‚«‚¢”‚Í%dŒÂ‚Å‚·\n", n);

    return (0);
}