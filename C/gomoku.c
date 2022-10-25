#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 10      // �ՖʃT�C�Y 10 * 10
#define STONE_SPACE 0      // �Ֆʂɂ���� �Ȃ�
#define STONE_BLACK 1      // �Ֆʂɂ���� ��
#define STONE_WHITE 2      // �Ֆʂɂ���� ��

void inputPutPos(int board[][BOARD_SIZE], int which);
void changeTurn(int *which_turn);
int checkOutPos(int x, int y);
void gameInit(int board[][BOARD_SIZE], int *which_turn);
void boardInit(int board[][BOARD_SIZE]);
void boardPrint(int board[][BOARD_SIZE]);
int gameEndProcess(int board[][BOARD_SIZE]);
int lenCheck(int board[][BOARD_SIZE], int x, int y);

//=======================================================
// main
//=======================================================
int main()
{
    // �ϐ��錾
    int board[BOARD_SIZE][BOARD_SIZE];
    int which_turn;
    
    // ��������
    gameInit(board, &which_turn);
    boardPrint(board);
    
    //---- ���C�����[�v
    while (1) {
        //--- ���͏���
        inputPutPos(board, which_turn);

        //--- ���Z����
        changeTurn(&which_turn);
        
        //--- �o�͏���
        boardPrint(board);
        
        //--- �I������
        if (gameEndProcess(board)) break;
    }
    return 0;
}

//-------------------------------------------------
// �u���ꏊ����
//-------------------------------------------------
void inputPutPos(int board[][BOARD_SIZE], int which)
{
    int pos_x, pos_y;
    
    printf("%s", (which == 1) ? "��" : "��");
    printf("�̔Ԃł��B�ǂ��ɒu���܂���\n> ");
    while (1) {
        scanf("%d %d", &pos_x, &pos_y);
        if (checkOutPos(pos_x, pos_y) && board[pos_y][pos_x] == STONE_SPACE) { break; }
        printf("�s���ȓ��͂ł�\n> ");
    }
    board[pos_y][pos_x] = which;
}

//-------------------------------------------------
// ��Ԍ�㏈��
//-------------------------------------------------
void changeTurn(int *which_turn)
{
    *which_turn = (*which_turn == STONE_BLACK) ? STONE_WHITE : STONE_BLACK;
}

//-------------------------------------------------
// �͈͊O�`�F�b�N
//-------------------------------------------------
int checkOutPos(int x, int y)
{
    return (x >= 0 && x < BOARD_SIZE && y >= 0 && y < BOARD_SIZE);
}

//-------------------------------------------------
// �Q�[����񏉊���
//-------------------------------------------------
void gameInit(int board[][BOARD_SIZE], int *which_turn)
{
    boardInit(board);
    *which_turn = STONE_BLACK;
}

//-------------------------------------------------
// �Ֆʏ�����
//-------------------------------------------------
void boardInit(int board[][BOARD_SIZE])
{
    int i, j;
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = STONE_SPACE;
        }
    }
}

//-------------------------------------------------
// �Ֆʏo��
//-------------------------------------------------
void boardPrint(int board[][BOARD_SIZE])
{
    int i, j;
    
    printf("  ");
    for (i = 0; i < BOARD_SIZE; i++) {
        printf("%d ", i);
    }
    puts("");
    for (i = 0; i < BOARD_SIZE; i++) {
        printf("%d ", i);
        for (j = 0; j < BOARD_SIZE; j++) {
            switch (board[i][j]) {
            case STONE_SPACE: printf("�E"); break;
            case STONE_BLACK: printf("��"); break;
            case STONE_WHITE: printf("��"); break;
            }
        }
        puts("");
    }
    puts("");
}

//-------------------------------------------------
// �Q�[���I������
//-------------------------------------------------
int gameEndProcess(int board[][BOARD_SIZE])
{
    int i, j, len_flag;
    
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == STONE_SPACE) { continue; }
            if (lenCheck(board, j, i)) {
                printf("%s�̏����ł��B\n", (board[i][j] == STONE_BLACK) ? "��" : "��");
                return 1;
            }
        }
    }
    return 0;
}

//-------------------------------------------------
// 5�A�m�F
//-------------------------------------------------
int lenCheck(int board[][BOARD_SIZE], int x, int y)
{
    int i, j, len_flag;
    int dx[] = { 0, 1, 1 };
    int dy[] = { 1, 0, 1 };
    
    for (i = 0; i < 3; i++) {
        for (j = 1, len_flag = 1; j <= 4; j++) {
            if (board[y][x] != board[y+j*dy[i]][x+j*dx[i]]) {
                len_flag = 0;
                break;
            }
        }
        if (len_flag == 1) { return 1; }
    }
    return 0;
}