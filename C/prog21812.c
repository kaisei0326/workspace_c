#include<stdio.h>

int main(void)
{
	char score[9][2];
	int i, j;
	int a=0, b=0;
	
	for(i=0;i<9;i++){
		printf("%d��\(A�`�[��)=", i + 1);
        scanf("%d", &score[i][0]);
        printf("%d��(B�`�[��)=", i + 1);
        scanf("%d", &score[i][1]);
    }
	
	for (i=0;i<9;i++){
        a += score[i][0];
		b += score[i][1];
     
    }

	
	
	
	printf("----------------------------------------------\n");
	printf("�`�[��  �P  �Q  �R  �S  �T  �U  �V  �W  �X  �v\n");
	printf("----------------------------------------------\n");
	for (j = 0; j < 2; j++){
        if (j == 0){
            printf("  A   ");
        }
        else {
            printf("  B   ");
        }
        for (i = 0; i < 9; i++){
            printf("  %2d", score[i][j]);
        }
        if (j == 0){
            printf("  %2d\n", a);
        }
        else {
            printf("  %2d\n", b);
        }
    }
    printf("----------------------------------------------\n");

	if(a == b){
		printf("�����͈��������ł�\n");
	}
	else if(a < b){
		printf("B�`�[���̏���\n");
	}
	else if(a > b){
		printf("A�`�[���̏���\n");
	}
	return(0);
}
	
