/**********************************/
/*  ���ł��P��Q�[���i�b����ҁj  */
/**********************************/
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

/*--�P��--*/
char   word[15][32]={ "printf","void","main","int","long",
                     "double","while","for","break","if",
                     "#include","char","fflush","time","gets"};
void  main( )
{
    char  c[128];                                  // ���͕�����
    int   t0,t1;                                   // �J�n,�I������
    int   i,j;

    printf("\n***�\�����ꂽ�P����^�C�v���Ă�������***");
    printf("\n���P���10��\������܂��B\n���ǂꂩ�L�[�������Ǝn�܂�܂��B\n");
    getche( );                                     // �P��������

    t0=time(NULL);                                 // ���݂̎���
    srand(t0);                                     // �����̏���

    for ( i=0; i<10; i++ )                         // 10��J��Ԃ�
      {
        j=rand( )%15;                              // ��������(0�`14)

        while ( 1 )
          {
            printf("%s: ",&word[j][0]);            // j�Ԗڂ̒P��\��
            fflush(stdout);
            gets(c);                               // ���������
            if ( strcmp(c,&word[j][0])==0 ) break; // �������v
            Beep(500,1000);                        // �u�U�[
          }
      }

    t1=time(NULL);                                 // ���݂̎���
    printf("\n�^�C���� %d�b�ł���\n",t1-t0);
}