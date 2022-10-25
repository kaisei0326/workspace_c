#include <windows.h>
#include <stdio.h>
#include <conio.h>

#define FIELD_OFFSET_X	5		/* �Q�[���t�B�[���h��X�I�t�Z�b�g 	*/
#define FIELD_OFFSET_Y	1		/*                   Y�I�t�Z�b�g 	*/
#define FIELD_WIDTH		60		/*                   ��				*/
#define FIELD_HEIGHT	22		/*					 ����			*/

#define PAD_LEN			5		/* �p�b�h�̒��� */
#define PAD_X_OFFSET	(FIELD_OFFSET_X - 1)
#define PAD_Y_OFFSET	(FIELD_HEIGHT + FIELD_OFFSET_Y)
#define PAD_X_MAX		(FIELD_WIDTH - PAD_LEN)

#define	MISS			0
#define	CLEAR			1
#define	CONTINUE		2

#define WAIT			5000000

HANDLE 	hStdout;			/* �R���\�[���E�B���h�E�̃n���h�� 	*/

int		BallX;				/* �{�[����X���W					*/
int		BallY;				/* �{�[����Y���W					*/
int		BallXDirect;		/* �{�[����X�����̈ړ������i1=�E, -1=���j */
int		BallYDirect;		/* �{�[����Y�����̈ړ������i1=��, -1=��j */

int	   	PadX;				/* �p�b�h��X�ʒu					*/

int		Score;				/* �X�R�A 							*/
int		Miss;				/* �~�X�̉� 						*/

/* �֐��v���g�^�C�v�錾 */
void InitGame(void);
void ResetGame(void);
void StartGame(void);

void DrawField(void);
void SetCursorLocate(int x, int y);

void MoveBall();
void ClearBall(int x, int y);
void DrawBall(int x, int y);

void MovePad(void);
void MovePadRight(void);
void MovePadLeft(void);

int JudgeBall(void);

void DrawPad(int x);
void PrintScore(void);
void PrintMiss(void);
void PrintMissMessage(void);

void wait(int w);
void beep(void);


/********************/
/*  ���C���֐�		*/
/********************/
int main(void)
{
	int turn;

	InitGame();			/* �Q�[���̏����� 	*/

	StartGame();		/* �Q�[���J�n�҂� 	*/
	
	while(1){
		for (turn = 0; turn < 10; turn++){
			wait(10);
			if (turn == 0){
				MoveBall();		/* �{�[���̈ړ� */
			}
			MovePad();			/* �p�b�h�̈ړ�	*/
			if (turn == 0){
				if (JudgeBall() == MISS){
						/* �~�X���̃{�[���ʒu�\�� */
					ClearBall(BallX, BallY);
					BallX += BallXDirect;
					BallY += BallYDirect;
					DrawBall(BallX, BallY);

					PrintMissMessage();		/* �~�X���b�Z�[�W */
					beep();					/* �~�X�̃r�[�v�� */
					wait(10000);			/* �Q�[���J�n�܂ł̑҂� */
					ResetGame();	/* �Q�[���t�B�[���h�̃N���A */
					StartGame();	/* �Q�[���J�n�҂� 	*/
				}
			}
		}
	}
}


/********************/
/*  �Q�[��������	*/
/********************/
void InitGame(void)
{
						/* �R���\�[���E�B���h�E�n���h���̎擾 */
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	Score = 0;
	Miss  = 0;

	ResetGame();
}


/********************/
/*  �Q�[�����Z�b�g	*/
/********************/
void ResetGame(void)
{

	DrawField();		/* �t�B�[���h�̕`�� */

	PrintScore();		/* �X�R�A�̕\��		*/

	PrintMiss();		/* �~�X�񐔂̕\��	*/

	PadX = 0;			/* �p�b�h�ʒu�̏������ƕ\�� */
	DrawPad(PadX);

	BallX = 2;			/* �{�[���ʒu�̏������ƕ\�� */
	BallY = FIELD_HEIGHT - 1;
	DrawBall(BallX, BallY);

	BallXDirect = 1;	/* �{�[���ړ������̏����� */
	BallYDirect = -1;
}


/************************/
/*  �Q�[���J�n�҂�����	*/
/************************/
void StartGame(void)
{
	int key;

	while (kbhit()){	/* �L�[�o�b�t�@�̃N���A */
		key = getch();
	}

	while (!kbhit());	/* �Q�[���J�n�҂� 	*/
}


/****************************/
/*  �Q�[���t�B�[���h�̕`��@*/
/****************************/
void DrawField(void)
{
	int i;

			/* ��ʃN���A */
	SetCursorLocate(0, 0);
	for (i = 0; i < 80 * 25; i++){
		printf(" ");
	}

			/* ���� */
	SetCursorLocate(FIELD_OFFSET_X - 1, FIELD_OFFSET_Y - 1);
	printf("+");
	for (i = 0; i < FIELD_WIDTH; i++){
		printf("-");
	}
	printf("+");

			/* �c�� */
	for (i =0; i < FIELD_HEIGHT; i++){
		SetCursorLocate(FIELD_OFFSET_X - 1, i + FIELD_OFFSET_Y);
		printf("|");
		SetCursorLocate(FIELD_OFFSET_X + FIELD_WIDTH, i + FIELD_OFFSET_Y);
		printf("|");
	}
}


/******************/
/*  �{�[���̈ړ��@*/
/******************/
void MoveBall(void)
{

				/* �{�[����X�����ړ����� */
	if (BallXDirect == 1){
		if (BallX == FIELD_WIDTH - 1){
			BallXDirect = -1;	/* �E�[�Ȃ̂ō��ɕ����]�� */
		}
	}
	else {
		if (BallX == 0){
			BallXDirect = 1;	/* ���[�Ȃ̂ŉE�ɕ����]�� */
		}
	}

				/* �{�[����Y�����ړ����� */
	if (BallYDirect == 1){
		if (BallY == FIELD_HEIGHT - 1){
			BallYDirect = -1;	/* ���[�Ȃ̂ŏ�ɕ����]�� */
		}
	}
	else {
		if (BallY == 0){
			BallYDirect = 1;	/* ��[�Ȃ̂ŉ��ɕ����]�� */
		}
	}

				/* �{�[���̈ړ��\�� */
	ClearBall(BallX, BallY);
	BallX += BallXDirect;
	BallY += BallYDirect;
	DrawBall(BallX, BallY);
}


/******************/
/*  �{�[���̏����@*/
/******************/
void ClearBall(int x, int y)
{
	SetCursorLocate(x + FIELD_OFFSET_X, y + FIELD_OFFSET_Y);
	printf(" ");
}

/******************/
/*  �{�[���̕`��@*/
/******************/
void DrawBall(int x, int y)
{
	SetCursorLocate(x + FIELD_OFFSET_X, y + FIELD_OFFSET_Y);
	printf("o");
}


/******************/
/*  �p�b�h�̈ړ��@*/
/******************/
void MovePad(void)
{
	int key;

	if (kbhit()){
		key = getch();
		if (key == 'z'){
			MovePadLeft();		/* z�Ȃ獶�Ɉړ� */
		}
		else if (key == 'x'){
			MovePadRight();		/* x�Ȃ�E�Ɉړ� */
		}
		else if (key == 'q'){
			exit(0);			/* q�Ȃ�Q�[���I�� */
		}
	}
}


/********************/
/*  �p�b�h�̉E�ړ��@*/
/********************/
void MovePadRight(void)
{
	if (PadX == PAD_X_MAX){
		return;			/* �E�[�Ȃ�Ȃɂ����Ȃ� */
	}

	PadX++;				/* �E�Ɉړ� */

	DrawPad(PadX);		/* �p�b�h�̕\�� */
}


/********************/
/*  �p�b�h�̍��ړ��@*/
/********************/
void MovePadLeft(void)
{
	if (PadX == 0){		/* ���[�Ȃ�Ȃɂ����Ȃ� */
		return;
	}

	PadX--;				/* ���Ɉړ� */

	DrawPad(PadX);		/* �p�b�h�̕\�� */
}


/******************/
/*  �p�b�h�̕\���@*/
/******************/
void DrawPad(x)
{
	SetCursorLocate(x + PAD_X_OFFSET, PAD_Y_OFFSET);
	printf(" ~~~~~ ");
}


/******************************/
/*  �{�[���ƃp�b�h�ʒu�̔���@*/
/******************************/
int JudgeBall(void)
{
	if (BallY == FIELD_HEIGHT - 1){	/* �{�[�������[�ɂ��邩�H */
		if ((BallX < PadX - 1) || (BallX > PadX + 5)){	/* �p�b�h�͈̔͂� */
			Miss++;					/* �~�X */
			PrintMiss();
			return (MISS);
		}
		else {
			Score++;				/* �͂˂��������� */
			PrintScore();
			return (CLEAR);
		}
	}
	return (CONTINUE);
}


/***********************/
/*  �J�[�\���ʒu�̐ݒ� */
/***********************/
void SetCursorLocate(int x, int y)
{
	COORD pos;

	pos.X = x;
	pos.Y = y;

	SetConsoleCursorPosition(hStdout, pos);
}


/*****************/
/*  �X�R�A�̕\�� */
/*****************/
void PrintScore(void)
{
	SetCursorLocate(FIELD_OFFSET_X + FIELD_WIDTH + 2, 21);

	printf("Score: %d   ", Score);
}

/*******************/
/*  �~�X�񐔂̕\�� */
/*******************/
void PrintMiss(void)
{
	SetCursorLocate(FIELD_OFFSET_X + FIELD_WIDTH + 2, 22);

	printf("Miss : %d   ", Miss);
}


/*************************/
/*  �~�X�̃��b�Z�[�W�\�� */
/*************************/
void PrintMissMessage(void)
{
	SetCursorLocate(20, 10);
	printf("****************************");
	SetCursorLocate(20, 11);
	printf("*        M I S S !!        *");
	SetCursorLocate(20, 12);
	printf("****************************");
}


/*************/
/*  �E�F�C�g */
/*************/
void wait(int wait)
{
	int i, j;
	volatile x;

	for (j = 0; j < wait; j++){
		for (i = 0; i < WAIT; i++){
 			x = 0;
		}
	}
}


/*********************/
/*  �r�[�v����炷 */
/*********************/
void beep(void)
{
	printf("\x7");
}

/****  �v���O��������� ****/
