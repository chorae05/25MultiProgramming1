#include<stdio.h>
#include<conio.h>

void printMenu() {
	printf("**********************");
	printf("¸Ş´º ¼Ò°³ ÀÔ´Ï´Ù.\n");
	printf("1 : Â¥Àå¸é\n");
	printf("2 : Â«»Í\n");
	printf("3 : ÅÁ¼öÀ°\n");

}


void main() {
	printMenu();
	char selectMenu = 'a';
	while (1) {
		selectMenu = _getch();

		if (selectMenu == '1') {
			printf("Â¥Àå¸é ¸ÀÀÖ°Ú´Ù\n");
		}
		if (selectMenu == '2') {
			printf("Â«»Í ¸À¾øÀ½ ¤»\n");
		}
	}
}