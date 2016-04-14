/*/////////////////////////////////////////////////////////////////////////////////////
課題7. 配列の5つの値の最大値を求めるプログラムを作成しなさい。（課題３の手続きを配列を使って書き直す）

キーワード：初期値、配列, 要素番号, if、else if、else
最終更新日：2016.03.30
*/
#define _CRT_SECURE_NO_WARNINGS  // 余計な警告が出ないようにする
#include	<stdio.h>

int	main( void )
{
	int	data[ 5 ];	// 調べる値
	int	max;	    // 最大値を入れる

	printf( "数値を5つ入力してください > " );
	scanf( "%d %d %d %d %d", &data[ 0 ], &data[ 1 ], &data[ 2 ], &data[ 3 ], &data[ 4 ] );

    max = data[0];
    if( max < data[1] )   max = data[1];
    if( max < data[2] )   max = data[2];
    if( max < data[3] )   max = data[3];
    if( max < data[4] )   max = data[4];
	//// 結果を出力する
	printf ( "最大値は %d です\n", max );

	return 0;
}
