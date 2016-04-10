/**
課題1 金種計算(ループ処理なし)
キーワード: 変数,代入,printf,scanf
**/

#include <stdio.h>

int main(void) {
	int money;								//金額を代入するための変数
	int count;								//各金種の枚数を代入するための変数

	printf("金額を入力して下さい>");
	scanf("%d",&money);

	count = money / 10000;					//①金額(money)を10000で割った商を枚数(count)に代入 ( = 1万円札の枚数 )
	money = money % 10000;					//②金額(money)を10000で割った余りを金額(money)に代入 ( = 1万円札で支払える分を除いた残りの金額 )
	printf("一万円札は%d枚です\n",count);	//③枚数(count)を画面に出力
											//以下の処理では①～③までの処理を割る数を変えながら繰り返す。
	count = money / 5000;
	money = money % 5000;
	printf("五千円札は%d枚です\n", count);

	count = money / 1000;
	money = money % 1000;
	printf("千円札は%d枚です\n", count);

	count = money / 500;
	money = money % 500;
	printf("五百円玉は%d枚です\n", count);

	count = money / 100;
	money = money % 100;
	printf("百円玉は%d枚です\n", count);

	count = money / 50;
	money = money % 50;
	printf("五十円玉は%d枚です\n", count);

	count = money / 10;
	money = money % 10;
	printf("十円玉は%d枚です\n", count);

	count = money / 5;
	money = money % 5;
	printf("五円玉は%d枚です\n", count);

	printf("一円玉は%d枚です\n", money);	//1で割った商や余りを計算しても意味が無いので、五円玉で支払える分を除いた残りの金額をそのまま出力。

	return 0;
}
