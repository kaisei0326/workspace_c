#include <stdio.h>
int main(void)
{
	int a;                  //n�̓���
	int b;                  //�J��Ԃ�����\���܂ł��낢��
	
	printf("n=");           //����
	scanf("%d", &a);         
	
	for (b = 1; b <= a ; b++){      //b��a��J��Ԃ�
		if (!(b % 2 == 0)){         //��̑I��
		printf("%d\n", b);
		}
	}
	return(0);
}
