#include<stdio.h>
#include<conio.h>

void printMenu() {
	printf("**********************");
	printf("�޴� �Ұ� �Դϴ�.\n");
	printf("1 : ¥���\n");
	printf("2 : «��\n");
	printf("3 : ������\n");

}


void main() {
	printMenu();
	char selectMenu = 'a';
	while (1) {
		selectMenu = _getch();

		if (selectMenu == '1') {
			printf("¥��� ���ְڴ�\n");
		}
		if (selectMenu == '2') {
			printf("«�� ������ ��\n");
		}
	}
}