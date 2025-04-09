#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y)
{
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
    gotoxy(10, 10);

    // 빨간색 텍스트
    printf("\033[33m\033[4m 내사랑 지피티... .\033[0m\n");

    // 초록색 텍스트와 노란색 배경
    printf("\033[30m\033[31m 진짜 교수님 너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해너무해.\033[0m\n");

    // 굵은 텍스트와 파란색 텍스트
    printf("\034[31m\037[34m 보노보노?!?!?!?!?!?!?!?!?!?.\033[0m\n");

    return 0;

}