/*/////////////////////////////////////////////////////////////////////////////////////
課題26．文字列反転
for文を使って、文字列を逆にして表示するプログラムを作成しなさい。
キーワード：文字列、ヌル、'\0'
最終更新日：2016.03.30
*/
#define _CRT_SECURE_NO_WARNINGS  // 余計な警告が出ないようにする
#include	<stdio.h>

int	main(void)
{
	int		top, last;
	char	tmp;
	char	s[100];
	printf("もとの文字列を入力してください > ");
	fgets(s, 100, stdin);

	for (last = 0; s[last] != '\0'; last++);
	last -= 2;

	for (top = 0; top < last; top++, last--) {
		tmp = s[top];
		s[top] = s[last];
		s[last] = tmp;
	}

	printf("入れ替えた文字列：%s\n", s);

	return 0;
}
