#include<stdio.h>
#include<windows.h>

void setTextColor(int color) {
	printf("\033[%dm", color); // 31=빨강, 32=초록, 33=노랑, 37=흰색 등
}
void resetTextColor() {
	printf("\033[0m");
}

void startUnderline() {
	printf("\033[4m");
}


void endUnderline() {
	printf("\033[24m");
}


int main() {
	char c = 'a';
	while (c != 'q') {

		printf("한글자를 입력하세요 : ");

		c = getchar();

		if (c == 'q') {
			printf("종료");
		}
		else {
			setTextColor(31);
			startUnderline();
			printf("%c\n", c);
			resetTextColor();
			endUnderline();

			c = getchar();
		}

	}

}
