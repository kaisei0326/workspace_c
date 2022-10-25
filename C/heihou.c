#include <stdio.h>
#include <math.h>

//       �}�N����`   
#define    TOL       5.0e-7      //  ���ɑ΂��鋖�e�덷
#define    MAX        40         //  �����v�Z�񐔂̍ő�l 
#define    SOLVED      0         //  �󋵕ϐ��i��͊���)
#define    LIMITED     1         //    ��    �i�v�Z�񐔃I�[�o�[�j
#define    OVFLOW      2         //    ��    �i�s���ȏ����l�j

#define    NUMBER     125.0      //  �����������߂鐔�l�i���̓f�[�^�j
#define    XINT         1.0      //  �����ߎ��l�i���̓f�[�^�j

//       �v���g�^�C�v�錾
float  SqRoot( float, float, int* );

/******************************************************************/

int main( void ){
    int    status;
    float  y, x0, root;    

    //   �����l���
    y = NUMBER;
    //   �Θb�I�ɏ�������ꍇ�i NUMBER �͒��ߍs�ɂ��� �j
    // printf("�����������߂鐔�l����� \n");
    // scanf("%f", &y); 

    x0 = XINT;     //  �����ߎ��l
    //   �Θb�I�ɏ�������ꍇ( XINT �͒��ߍs�ɂ��� �j
    // printf("���̏����ߎ��l����� \n");
    // scanf("%f", &x0);

    printf(" y=%f   x0=%f \n", y, x0);

    //  �����������߂�v�Z
    root = SqRoot( y, x0, &status );

    //  ���ʂ̏o��
    if(status == SOLVED)  printf(" root=%f \n", root);

    return 0;
}

/********************************************************************
 *       �����������߂镛�֐�                                       *
 *           y: �����������߂鐔�l�Ax�F�������̏����ߎ��l           *
 ********************************************************************/
float SqRoot(float y, float x, int *state)
{
    //    �ϐ��̐錾�Ə�����
    int    i = 0, flag = 1, status;
    float  newx, oldx;
    float  Tiny = 1.0e-10;

    //    �����l�̊m�F
    if( x < Tiny ) { status = OVFLOW;  flag = 0; }
    oldx = x;

    while( flag >= 1 ){
        i++;
        newx = 0.5*( oldx + y/oldx );
        printf("    >SqRoot, No. of iter.=%d,  root=%f \n",i,newx);

        //   �������ĉ������ꍇ
        if(fabs(newx-oldx) <= TOL) { status = SOLVED;  flag = 0; }

        //   �v�Z�񐔃I�[�o�[�̏ꍇ
        if( i >= MAX ) {  status = LIMITED;  flag = 0; }

        //   ���̍X�V
        oldx = newx ;
    } 
    if( status == OVFLOW) 
        printf("    >SqRoot, x0 ���s�K�� (%f) \n", x); 
    if( status == LIMITED)  
        printf("    >SqRoot, %d ��v�Z����������B���ݒl�G%f\n", 
                 i, oldx); 
    *state = status;
    return ( newx );   
}