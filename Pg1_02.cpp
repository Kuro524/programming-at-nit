/*//////////////////////////////////////////////////////////////////////////////////
課題2. 10進数を2進数に変換する基数変換のプログラムを作成しなさい。
ただし繰り返し処理（for文、while文など）は行わないこと。
実行例の通り、2進数の11桁目（2^10）から表示させること。
	条件：　入力される10進数は最大で2047(2の11乗-1)までとする。

	実行例：「2000」を入力すると「11111010000」と表示される。
	10進数を入力してください > 2000
	11111010000

	キーワード：基数変換、2進数、10進数、順次処理

最終更新日：2016.03.28
*/
#define _CRT_SECURE_NO_WARNINGS  // 余計な警告が出ないようにする
#include	<stdio.h>

int	main( void )
{
	int	dec;	// 2進数へ変換される10進数
	int	no;	// 2進数へ基数変換された桁の数値(0または1)

	printf( "10進数を入力してください > " );
	scanf( "%d", &dec );

    no = dec / 1024;
    dec = dec % 1024;
    printf("%d",no);

    no = dec / 512;
    dec = dec % 512;
    printf("%d",no);

    no = dec / 256;
    dec = dec % 256;
    printf("%d",no);

    no = dec / 128;
    dec = dec % 128;
    printf("%d",no);

    no = dec / 64;
    dec = dec % 64;
    printf("%d",no);

    no = dec / 32;
    dec = dec % 32;
    printf("%d",no);

    no = dec / 16;
    dec = dec % 16;
    printf("%d",no);

    no = dec / 8;
    dec = dec % 8;
    printf("%d",no);

    no = dec / 4;
    dec = dec % 4;
    printf("%d",no);

    no = dec / 2;
    dec = dec % 2;
    printf("%d",no);

    printf("%d\n", dec);

	return 0;
}
