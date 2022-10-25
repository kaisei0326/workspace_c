#include <windows.h>
#include <stdio.h>
#include <conio.h>

#define FIELD_OFFSET_X	5		/* ゲームフィールドのXオフセット 	*/
#define FIELD_OFFSET_Y	1		/*                   Yオフセット 	*/
#define FIELD_WIDTH		60		/*                   幅				*/
#define FIELD_HEIGHT	22		/*					 高さ			*/

#define PAD_LEN			5		/* パッドの長さ */
#define PAD_X_OFFSET	(FIELD_OFFSET_X - 1)
#define PAD_Y_OFFSET	(FIELD_HEIGHT + FIELD_OFFSET_Y)
#define PAD_X_MAX		(FIELD_WIDTH - PAD_LEN)

#define	MISS			0
#define	CLEAR			1
#define	CONTINUE		2

#define WAIT			5000000

HANDLE 	hStdout;			/* コンソールウィンドウのハンドル 	*/

int		BallX;				/* ボールのX座標					*/
int		BallY;				/* ボールのY座標					*/
int		BallXDirect;		/* ボールのX方向の移動方向（1=右, -1=左） */
int		BallYDirect;		/* ボールのY方向の移動方向（1=下, -1=上） */

int	   	PadX;				/* パッドのX位置					*/

int		Score;				/* スコア 							*/
int		Miss;				/* ミスの回数 						*/

/* 関数プロトタイプ宣言 */
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
/*  メイン関数		*/
/********************/
int main(void)
{
	int turn;

	InitGame();			/* ゲームの初期化 	*/

	StartGame();		/* ゲーム開始待ち 	*/
	
	while(1){
		for (turn = 0; turn < 10; turn++){
			wait(10);
			if (turn == 0){
				MoveBall();		/* ボールの移動 */
			}
			MovePad();			/* パッドの移動	*/
			if (turn == 0){
				if (JudgeBall() == MISS){
						/* ミス時のボール位置表示 */
					ClearBall(BallX, BallY);
					BallX += BallXDirect;
					BallY += BallYDirect;
					DrawBall(BallX, BallY);

					PrintMissMessage();		/* ミスメッセージ */
					beep();					/* ミスのビープ音 */
					wait(10000);			/* ゲーム開始までの待ち */
					ResetGame();	/* ゲームフィールドのクリア */
					StartGame();	/* ゲーム開始待ち 	*/
				}
			}
		}
	}
}


/********************/
/*  ゲーム初期化	*/
/********************/
void InitGame(void)
{
						/* コンソールウィンドウハンドルの取得 */
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	Score = 0;
	Miss  = 0;

	ResetGame();
}


/********************/
/*  ゲームリセット	*/
/********************/
void ResetGame(void)
{

	DrawField();		/* フィールドの描画 */

	PrintScore();		/* スコアの表示		*/

	PrintMiss();		/* ミス回数の表示	*/

	PadX = 0;			/* パッド位置の初期化と表示 */
	DrawPad(PadX);

	BallX = 2;			/* ボール位置の初期化と表示 */
	BallY = FIELD_HEIGHT - 1;
	DrawBall(BallX, BallY);

	BallXDirect = 1;	/* ボール移動方向の初期化 */
	BallYDirect = -1;
}


/************************/
/*  ゲーム開始待ち処理	*/
/************************/
void StartGame(void)
{
	int key;

	while (kbhit()){	/* キーバッファのクリア */
		key = getch();
	}

	while (!kbhit());	/* ゲーム開始待ち 	*/
}


/****************************/
/*  ゲームフィールドの描画　*/
/****************************/
void DrawField(void)
{
	int i;

			/* 画面クリア */
	SetCursorLocate(0, 0);
	for (i = 0; i < 80 * 25; i++){
		printf(" ");
	}

			/* 横線 */
	SetCursorLocate(FIELD_OFFSET_X - 1, FIELD_OFFSET_Y - 1);
	printf("+");
	for (i = 0; i < FIELD_WIDTH; i++){
		printf("-");
	}
	printf("+");

			/* 縦線 */
	for (i =0; i < FIELD_HEIGHT; i++){
		SetCursorLocate(FIELD_OFFSET_X - 1, i + FIELD_OFFSET_Y);
		printf("|");
		SetCursorLocate(FIELD_OFFSET_X + FIELD_WIDTH, i + FIELD_OFFSET_Y);
		printf("|");
	}
}


/******************/
/*  ボールの移動　*/
/******************/
void MoveBall(void)
{

				/* ボールのX方向移動判定 */
	if (BallXDirect == 1){
		if (BallX == FIELD_WIDTH - 1){
			BallXDirect = -1;	/* 右端なので左に方向転換 */
		}
	}
	else {
		if (BallX == 0){
			BallXDirect = 1;	/* 左端なので右に方向転換 */
		}
	}

				/* ボールのY方向移動判定 */
	if (BallYDirect == 1){
		if (BallY == FIELD_HEIGHT - 1){
			BallYDirect = -1;	/* 下端なので上に方向転換 */
		}
	}
	else {
		if (BallY == 0){
			BallYDirect = 1;	/* 上端なので下に方向転換 */
		}
	}

				/* ボールの移動表示 */
	ClearBall(BallX, BallY);
	BallX += BallXDirect;
	BallY += BallYDirect;
	DrawBall(BallX, BallY);
}


/******************/
/*  ボールの消去　*/
/******************/
void ClearBall(int x, int y)
{
	SetCursorLocate(x + FIELD_OFFSET_X, y + FIELD_OFFSET_Y);
	printf(" ");
}

/******************/
/*  ボールの描画　*/
/******************/
void DrawBall(int x, int y)
{
	SetCursorLocate(x + FIELD_OFFSET_X, y + FIELD_OFFSET_Y);
	printf("o");
}


/******************/
/*  パッドの移動　*/
/******************/
void MovePad(void)
{
	int key;

	if (kbhit()){
		key = getch();
		if (key == 'z'){
			MovePadLeft();		/* zなら左に移動 */
		}
		else if (key == 'x'){
			MovePadRight();		/* xなら右に移動 */
		}
		else if (key == 'q'){
			exit(0);			/* qならゲーム終了 */
		}
	}
}


/********************/
/*  パッドの右移動　*/
/********************/
void MovePadRight(void)
{
	if (PadX == PAD_X_MAX){
		return;			/* 右端ならなにもしない */
	}

	PadX++;				/* 右に移動 */

	DrawPad(PadX);		/* パッドの表示 */
}


/********************/
/*  パッドの左移動　*/
/********************/
void MovePadLeft(void)
{
	if (PadX == 0){		/* 左端ならなにもしない */
		return;
	}

	PadX--;				/* 左に移動 */

	DrawPad(PadX);		/* パッドの表示 */
}


/******************/
/*  パッドの表示　*/
/******************/
void DrawPad(x)
{
	SetCursorLocate(x + PAD_X_OFFSET, PAD_Y_OFFSET);
	printf(" ~~~~~ ");
}


/******************************/
/*  ボールとパッド位置の判定　*/
/******************************/
int JudgeBall(void)
{
	if (BallY == FIELD_HEIGHT - 1){	/* ボールが下端にあるか？ */
		if ((BallX < PadX - 1) || (BallX > PadX + 5)){	/* パッドの範囲か */
			Miss++;					/* ミス */
			PrintMiss();
			return (MISS);
		}
		else {
			Score++;				/* はねかえし成功 */
			PrintScore();
			return (CLEAR);
		}
	}
	return (CONTINUE);
}


/***********************/
/*  カーソル位置の設定 */
/***********************/
void SetCursorLocate(int x, int y)
{
	COORD pos;

	pos.X = x;
	pos.Y = y;

	SetConsoleCursorPosition(hStdout, pos);
}


/*****************/
/*  スコアの表示 */
/*****************/
void PrintScore(void)
{
	SetCursorLocate(FIELD_OFFSET_X + FIELD_WIDTH + 2, 21);

	printf("Score: %d   ", Score);
}

/*******************/
/*  ミス回数の表示 */
/*******************/
void PrintMiss(void)
{
	SetCursorLocate(FIELD_OFFSET_X + FIELD_WIDTH + 2, 22);

	printf("Miss : %d   ", Miss);
}


/*************************/
/*  ミスのメッセージ表示 */
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
/*  ウェイト */
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
/*  ビープ音を鳴らす */
/*********************/
void beep(void)
{
	printf("\x7");
}

/****  プログラムおわり ****/
