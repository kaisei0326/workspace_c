#include <stdio.h>

int main(void)
{
    unsigned int d;
    int i;
    int n;

    printf("16�i��=");
    scanf("%x", &d);

    n = 0;
    for (i = 0; i < 32; i++){
        if ((d & (1 << i)) != 0){
            n++;
        }
    }

    printf("%x�ɂ�1�̃r�b�g��%d����܂�\n", d, n);

    return (0);
}
