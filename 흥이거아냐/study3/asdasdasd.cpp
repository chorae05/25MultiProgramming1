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

int main() {
	int i = 0;
	printf("            W");
	while (i <= 10) {
		gotoXY(0, 0);
		int j = 0;
		while (j < i) {
			printf(" ");
			Sleep(100);
			j = j + 1;
		}
		gotoXY(i, 0);
		printf(">");
		Sleep(100);

		i = i + 1;
	}
}