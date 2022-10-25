#include <stdio.h>
#include <math.h>

//       マクロ定義   
#define    TOL       5.0e-7      //  解に対する許容誤差
#define    MAX        40         //  反復計算回数の最大値 
#define    SOLVED      0         //  状況変数（解析完了)
#define    LIMITED     1         //    同    （計算回数オーバー）
#define    OVFLOW      2         //    同    （不正な初期値）

#define    NUMBER     125.0      //  平方根を求める数値（入力データ）
#define    XINT         1.0      //  初期近似値（入力データ）

//       プロトタイプ宣言
float  SqRoot( float, float, int* );

/******************************************************************/

int main( void ){
    int    status;
    float  y, x0, root;    

    //   初期値代入
    y = NUMBER;
    //   対話的に処理する場合（ NUMBER は注釈行にする ）
    // printf("平方根を求める数値を入力 \n");
    // scanf("%f", &y); 

    x0 = XINT;     //  初期近似値
    //   対話的に処理する場合( XINT は注釈行にする ）
    // printf("解の初期近似値を入力 \n");
    // scanf("%f", &x0);

    printf(" y=%f   x0=%f \n", y, x0);

    //  平方根を求める計算
    root = SqRoot( y, x0, &status );

    //  結果の出力
    if(status == SOLVED)  printf(" root=%f \n", root);

    return 0;
}

/********************************************************************
 *       平方根を求める副関数                                       *
 *           y: 平方根を求める数値、x：平方根の初期近似値           *
 ********************************************************************/
float SqRoot(float y, float x, int *state)
{
    //    変数の宣言と初期化
    int    i = 0, flag = 1, status;
    float  newx, oldx;
    float  Tiny = 1.0e-10;

    //    初期値の確認
    if( x < Tiny ) { status = OVFLOW;  flag = 0; }
    oldx = x;

    while( flag >= 1 ){
        i++;
        newx = 0.5*( oldx + y/oldx );
        printf("    >SqRoot, No. of iter.=%d,  root=%f \n",i,newx);

        //   収束して解けた場合
        if(fabs(newx-oldx) <= TOL) { status = SOLVED;  flag = 0; }

        //   計算回数オーバーの場合
        if( i >= MAX ) {  status = LIMITED;  flag = 0; }

        //   解の更新
        oldx = newx ;
    } 
    if( status == OVFLOW) 
        printf("    >SqRoot, x0 が不適切 (%f) \n", x); 
    if( status == LIMITED)  
        printf("    >SqRoot, %d 回計算後収束せず。現在値；%f\n", 
                 i, oldx); 
    *state = status;
    return ( newx );   
}