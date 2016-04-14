/*/////////////////////////////////////////////////////////////////////////////////////
課題6 二次方程式の係数a,b,cをキー入力し、解を求めるプログラムを作成しなさい。
	＜出力メッセージ（9は仮の数字）＞
	　aが0　　　　　　　"二次方程式ではありません\n"
	　判別式がマイナス　"虚数解です\n"
	　重解           "重解です x=999.99\n"
	  2つの解　       "x1=999.99\n"
	  　             "x2=999.99\n"
	＜テスト＞　以下の値のときの解を計算して実行結果と比較すること
	① a=2,b=1,c=-1  ② a=1,b=2,c=3  ③ a=1,b=2,c=1  ④ a=0,b=2,c=-3

キーワード：平方根、sqrt(), double型, if文、判別式、else if
最終更新日：2016.03.29
*/
#define _CRT_SECURE_NO_WARNINGS  // 余計な警告が出ないようにする
#include	<stdio.h>
#include	<math.h>

int	main( void )
{
	double	a, b, c;	// 二次方程式の係数 y=ax2+bx+c
	double	d;			// 判別式 b2-4ac
	double	r;			// 判別式の平方根
	double	x1, x2;		// 解

	printf( "二次方程式の係数を入力してください >" );
	scanf( "%lf %lf %lf", &a, &b, &c );	// doubleで入力するときは%lfを使う

	if( a == 0 ){
        printf( "二次方程式ではありません\n" );
        return 0;
    }

    d = ( b * b ) - ( 4 * a * c );
    r = sqrt(d);
    
    if( d < 0 ){
        printf( "虚数解です\n" );
    }
    else if( d == 0 ){
        x1 = (-b + r) / ( 2 * a );
        printf( "重解です x=%f\n", x1 );
    }
	else{
        x1 = (-b + r) / ( 2 * a );
        x2 = (-b - r) / ( 2 * a );
        printf( "x1=%f\nx2=%f\n", x1, x2 );
    }

	return 0;
}
