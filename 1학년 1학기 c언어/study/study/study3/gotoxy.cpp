/*
ī��Ʈ�ٿ� ���α׷��� ������

*/
//1���� 10���� ����Ѵ�. ���ڰ� ���� �� �� ���ڰ� �������� ���� ������ �ϴ� ���ڰ� �� �ڸ��� ���;� �Ѵ�.

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

	system("cls");  // ���� 10���� �� ����ϰ� ���� ȭ���� �� ����!
}