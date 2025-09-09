/*
카운트다운 프로그램을 만들자

*/
//1부터 10까지 출력한다. 숫자가 써진 뒤 그 숫자가 지워지고 다음 써져야 하는 숫자가 그 자리에 들어와야 한다.

#include<stdio.h>
#include<time.h>
#include<windows.h>

void gotoXY(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void countdown() {
	int i = 1;
	while (i <= 10) {
		gotoXY(0, 0);
		printf("%d", i);
		Sleep(500);
		i = i + 1;

	}
}

int main() {
	countdown();

	system("cls");  // 숫자 10까지 다 출력하고 나면 화면을 싹 지움!
}