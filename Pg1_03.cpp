/*//////////////////////////////////////////////////////////////////////////////////
課題3 5つの値の最大値を求め表示するプログラムを作成しなさい。

キーワード：if文、比較演算子、代入演算子

最終更新日：2016.03.28
*/
#define _CRT_SECURE_NO_WARNINGS                 // 余計な警告が出ないようにする
#include	<stdio.h>

int	main( void )
{
	int	a, b, c, d, e;	                        // 調べる値
	int	max;	                                // 最大値を入れる

	printf( "数値を5つ入力してください > " );
	scanf( "%d %d %d %d %d", &a, &b, &c, &d, &e );

	max = a;
    if( max < b )   max = b;
    if( max < c )   max = c;
    if( max < d )   max = d;
    if( max < e )   max = e;

	// 結果を表示する
	printf( "最大値は %d です\n", max );

	return 0;
}
