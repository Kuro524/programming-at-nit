/*/////////////////////////////////////////////////////////////////////////////////////
課題9. for文を使った繰返しで、配列の値を合計し表示するプログラムを作成しなさい。

キーワード：for文,配列
最終更新日：2016.03.30
*/
#define _CRT_SECURE_NO_WARNINGS  // 余計な警告が出ないようにする
#include	<stdio.h>

int	main( void )
{
	int	data[ 4 ];	// 合計する値の整数配列
	int	ans = 0;	// 合計値を入れる
	int	i;

	printf( "合計する数値を4つ入力してください > " );
	scanf( "%d %d %d %d", &data[ 0 ], &data[ 1 ], &data[ 2 ], &data[ 3 ]);

	for( i = 0; i < 4; i++ )   ans += data[i];

	printf( "合計は %d です\n", ans );

	return 0;
}
