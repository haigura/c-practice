#include <stdio.h>

int main(void) {

	static int price = 150, coin, change,i;

	while (1) {

		printf("---自販機---\n");
		printf("いらっしゃいませ！商品は150円です\n");
		printf("投入金額を入力してください：");
		scanf_s("%d", &coin);

		if (coin == 0) {
			printf("ご利用ありがとうございました。\n");
			break;
		}

		/*決済処理*/
		change = coin - price;

		if (coin >= price) {
			printf("ありがとうございます\n");
			printf("おつりは %d 円です\n", change);
			printf("ラッキーチャンス:12345\n");
		} else if (coin <= price) {
			printf("金額が足りません。返金します。\n");
		}
	}

	return 0;
}