/*/////////////////////////////////////////////////////////////////////////////////////
課題24  文字列比較
for文を使って、文字列を比べて「同じ」または「違う」と表示するプログラムを作成しなさい。

キーワード：文字列比較、ヌル文字
最終更新日：2016.03.28
*/
#define _CRT_SECURE_NO_WARNINGS  // 余計な警告が出ないようにする
#include	<stdio.h>

int	main(void)
{
	int		i;
	char	s1[100];
	char	s2[100];
	printf("文字列１を入力してください > ");
	fgets(s1, 100, stdin);
	printf("文字列２を入力してください > ");
	fgets(s2, 100, stdin);

	for (i = 0; s1[i] == s2[i]; i++) {
		if (s1[i] == '\0') {
			printf("同じ\n");
			return 0;
		}
	}
	printf("違う\n");

	return 0;
}
