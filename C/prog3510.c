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
        printf("����=");
        scanf("%d", &a[i]);
		sum += a[i];
		heikin = sum / 10;
		if (a[i] > heikin){
            n++;
        }
    }
    


    printf("���ϒl���傫������%d�ł�\n", n);

    return (0);
}