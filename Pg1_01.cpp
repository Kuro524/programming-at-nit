/*//////////////////////////////////////////////////////////////////////////////////
課題1. 金種計算（ある金額に対し、合計が同額となる紙幣と硬貨の必要最小限の枚数を求める計算）を行い
	その結果を出力するプログラムを作成しなさい。

	金種計算の例：アルバイト料を2万3千4百5十6円受け取る状況を考えてみましょう。
	10000,5000,1000円札、500,100,50,10,5,1円玉をそれぞれ何枚受け取りますか
	（1円玉を2万3千4百5十6枚ももらったりすることはないですね）？
　　　　通常、合計が23,456円となる紙幣と硬貨の必要最小限の枚数を受け取ります。
　　　　多くの人は、必要枚数の計算を10000円札から始め、1円玉まで順次計算することと思います。

	プログラムの実行例：
	金額を入力してください > 23456
	10000円は2枚です
	5000円は0枚です
	1000円は3枚です
	500円は0枚です
	100円は4枚です
	50円は1枚です
	10円は0枚です
	5円は1枚です
	1円は1枚です

	作成するプログラムの追加の条件：
	・while文やfor文等の繰り返し文は使用しないこと。
  	・10000,5000,1000円札、500,100,50,10,5,1円玉の必要枚数をそれぞれ求めることとし、2000円札は含めないこと。
  	・枚数は整数値(小数点以下のない値)で求めること。例：43÷10=4，3÷5=0，3÷1=3

キーワード：順次処理、整数型、除算演算子、剰余演算子、代入演算子、金種計算
最終更新日：2016.03.29
*/
#define _CRT_SECURE_NO_WARNINGS  // 余計な警告が出ないようにする
#include	<stdio.h>

int	main( void )
{
	int	money;
	int	no;

	printf( "金額を入力してください > " );
	scanf( "%d", &money );

    no = money / 10000;                  //①金額(money)を10000で割った商を枚数(no)に代入 ( = 1万円札の枚数 )
    money = money % 10000;                  //②金額(money)を10000で割った余りを金額(money)に代入 ( = 1万円札で支払える分を除いた残りの金額 )
    printf("一万円札は%d枚です\n",no);   //③枚数(no)を画面に出力
                                            //以下の処理では①～③までの処理を割る数を変えながら繰り返す。
    no = money / 5000;
    money = money % 5000;
    printf("五千円札は%d枚です\n", no);

    no = money / 1000;
    money = money % 1000;
    printf("千円札は%d枚です\n", no);

    no = money / 500;
    money = money % 500;
    printf("五百円玉は%d枚です\n", no);

    no = money / 100;
    money = money % 100;
    printf("百円玉は%d枚です\n", no);

    no = money / 50;
    money = money % 50;
    printf("五十円玉は%d枚です\n", no);

    no = money / 10;
    money = money % 10;
    printf("十円玉は%d枚です\n", no);

    no = money / 5;
    money = money % 5;
    printf("五円玉は%d枚です\n", no);

    printf("一円玉は%d枚です\n", money);    //1で割った商や余りを計算しても意味が無いので、五円玉で支払える分を除いた残りの金額をそのまま出力。

	return 0;
}
