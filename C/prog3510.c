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
        printf("整数=");
        scanf("%d", &a[i]);
		sum += a[i];
		heikin = sum / 10;
		if (a[i] > heikin){
            n++;
        }
    }
    


    printf("平均値より大きい数は%d個です\n", n);

    return (0);
}