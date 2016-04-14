/*/////////////////////////////////////////////////////////////////////////////////////
課題C11. for文を使って、10進数の数を入力すると2進数に変換する基数変換の手続きを作成しなさい。
ただし、10進数の最大値は2047とする。
変数binには、はじめに1024を代入しておき、binが0より大きい間繰り返す。
キーワード：for文、基数変換
最終更新日：2016.03.28
*/
#define _CRT_SECURE_NO_WARNINGS  // 余計な警告が出ないようにする
#include	<stdio.h>

int	main(void)
{
	int	dec;	// 2進数に変換する10進数
	int	no;		// 現在の桁の数
	int	bin;	// 2進数の現在の桁の値

	printf("2進数に変換する値を入力してください >");
	scanf("%d", &dec);

	for (bin = 1024; bin > 0; bin /= 2) {
		no = dec / bin;
		dec = dec % bin;
		printf("%d", no);
	}
	printf("\n");

	return 0;
}
