/**
‰Û‘è1 ‹àíŒvZ(ƒ‹[ƒvˆ—‚È‚µ)
ƒL[ƒ[ƒh: •Ï”,‘ã“ü,printf,scanf
**/

#include <stdio.h>

int main(void) {
	int money;								//‹àŠz‚ğ‘ã“ü‚·‚é‚½‚ß‚Ì•Ï”
	int count;								//Še‹àí‚Ì–‡”‚ğ‘ã“ü‚·‚é‚½‚ß‚Ì•Ï”

	printf("‹àŠz‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢>");
	scanf("%d",&money);

	count = money / 10000;					//‡@‹àŠz(money)‚ğ10000‚ÅŠ„‚Á‚½¤‚ğ–‡”(count)‚É‘ã“ü ( = 1–œ‰~D‚Ì–‡” )
	money = money % 10000;					//‡A‹àŠz(money)‚ğ10000‚ÅŠ„‚Á‚½—]‚è‚ğ‹àŠz(money)‚É‘ã“ü ( = 1–œ‰~D‚Åx•¥‚¦‚é•ª‚ğœ‚¢‚½c‚è‚Ì‹àŠz )
	printf("ˆê–œ‰~D‚Í%d–‡‚Å‚·\n",count);	//‡B–‡”(count)‚ğ‰æ–Ê‚Éo—Í
											//ˆÈ‰º‚Ìˆ—‚Å‚Í‡@`‡B‚Ü‚Å‚Ìˆ—‚ğŠ„‚é”‚ğ•Ï‚¦‚È‚ª‚çŒJ‚è•Ô‚·B
	count = money / 5000;
	money = money % 5000;
	printf("ŒÜç‰~D‚Í%d–‡‚Å‚·\n", count);

	count = money / 1000;
	money = money % 1000;
	printf("ç‰~D‚Í%d–‡‚Å‚·\n", count);

	count = money / 500;
	money = money % 500;
	printf("ŒÜ•S‰~‹Ê‚Í%d–‡‚Å‚·\n", count);

	count = money / 100;
	money = money % 100;
	printf("•S‰~‹Ê‚Í%d–‡‚Å‚·\n", count);

	count = money / 50;
	money = money % 50;
	printf("ŒÜ\‰~‹Ê‚Í%d–‡‚Å‚·\n", count);

	count = money / 10;
	money = money % 10;
	printf("\‰~‹Ê‚Í%d–‡‚Å‚·\n", count);

	count = money / 5;
	money = money % 5;
	printf("ŒÜ‰~‹Ê‚Í%d–‡‚Å‚·\n", count);

	printf("ˆê‰~‹Ê‚Í%d–‡‚Å‚·\n", money);	//1‚ÅŠ„‚Á‚½¤‚â—]‚è‚ğŒvZ‚µ‚Ä‚àˆÓ–¡‚ª–³‚¢‚Ì‚ÅAŒÜ‰~‹Ê‚Åx•¥‚¦‚é•ª‚ğœ‚¢‚½c‚è‚Ì‹àŠz‚ğ‚»‚Ì‚Ü‚Üo—ÍB

	return 0;
}