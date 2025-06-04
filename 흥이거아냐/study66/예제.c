/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
void gotoXY(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

void setTextColor(int color) {
    printf("\033[%dm", color);
}

void resetTextColor() {
    printf("\033[0m");
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void gotoXY(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

void setTextColor(int color) {
    printf("\033[%dm", color);
}

void resetTextColor() {
    printf("\033[0m");
}

int main() {
    char letters[5] = {'T', 'K', 'Q', 'Z', 'M'};
    int correct = 0, wrong = 0;
    int i = 0;

    while (i < 5) {
        system("cls");
        gotoXY(1, 1);
        printf("문자 등장: %c\n", letters[i]);

        clock_t start = clock();
        int matched = 0;
        char input = '\0';

        while (((clock() - start) / CLOCKS_PER_SEC) < 5) {
            if (_kbhit()) {
                input = _getch();
                gotoXY(1, 2);
                printf("%c\n", input);

                if (input == letters[i]) {
                    gotoXY(1, 3);
                    setTextColor(32); // 초록
                    printf("완벽!!!\n");
                    resetTextColor();
                    correct++;
                } else {
                    gotoXY(1, 3);
                    setTextColor(31); // 빨강
                    printf("에러!!!\n");
                    resetTextColor();
                    wrong++;
                }
                matched = 1;
                break;
            }
        }

        if (!matched) {
            gotoXY(1, 3);
            setTextColor(31); // 빨강
            printf("에러!!! (입력 없음)\n");
            resetTextColor();
            wrong++;
        }

        gotoXY(1, 4);
        printf("\n");
        Sleep(1000);
        i++;
    }

    gotoXY(1, 5);
    setTextColor(33); // 노랑
    printf("=== 결과 ===\n");
    printf("정답 수: %d\n", correct);
    printf("오답 수: %d\n", wrong);
    resetTextColor();

    return 0;
}


-------------------------------------------------------------------------------

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

void setTextColor(int color) {
    printf("\033[%dm", color);
}
void resetTextColor() {
    printf("\033[0m");
}

int main() {
    char target[5] = { 'A', 'S', 'D', 'F', 'G' };
    char input;
    int correct = 0, wrong = 0;

    for (int i = 0; i < 5; i++) {
        system("cls");  // 화면 깨끗이
        printf("%c\n", target[i]);  // 1번째 줄: 보여줄 알파벳

        clock_t start = clock();
        int pressed = 0;

        while (((clock() - start) / CLOCKS_PER_SEC) < 5) {
            if (_kbhit()) {
                input = _getch();
                printf("%c\n", input);  // 2번째 줄: 사용자가 누른 키

                if (input == target[i]) {
                    setTextColor(32);
                    printf("완벽!!!\n");
                    correct++;
                } else {
                    setTextColor(31);
                    printf("에러!!!\n");
                    wrong++;
                }

                resetTextColor();
                pressed = 1;
                break;
            }
        }

        if (!pressed) {
            printf("-\n"); // 누르지 않은 경우 빈 줄
            setTextColor(31);
            printf("에러!!! (시간 초과)\n");
            resetTextColor();
            wrong++;
        }

        printf("\n");
        Sleep(1000);
    }

    setTextColor(33);
    printf("=== 결과 ===\n");
    printf("정답 수: %d\n", correct);
    printf("오답 수: %d\n", wrong);
    resetTextColor();

    return 0;
}
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>

void setTextColor(int color) {    //색 바꾸는 함수
    printf("\033[%dm", color);
}
void resetTextColor() {    //색깔을 다시 원래대로 돌려줘요
    printf("\033[0m");
}

int main() {
    char input;
    int i = 0;
    int correct = 0, wrong = 0;
    while (i < 5) {
        if (i == 0) {              // 첫 번째 문제
            printf("1번째 문자: A\n");
            input = _getch();            //그 다음 네가 키보드로 글자 하나 누르면
            printf("%c\n", input);        // 누른 글자 보여줌
            if (input == 'A') {          //a가 맞는 지 확인
                setTextColor(32); printf("완벽!!!\n"); correct++;
            }
            else {
                setTextColor(31); printf("에러!!!\n"); wrong++;
            }
        }
        else if (i == 1) {
            printf("2번째 문자: S\n");
            input = _getch();
            printf("%c\n", input);
            if (input == 'S') {
                setTextColor(32); printf("완벽!!!\n"); correct++;
            }
            else {
                setTextColor(31); printf("에러!!!\n"); wrong++;
            }
        }
        else if (i == 2) {
            printf("3번째 문자: D\n");
            input = _getch();
            printf("%c\n", input);
            if (input == 'D') {
                setTextColor(32); printf("완벽!!!\n"); correct++;
            }
            else {
                setTextColor(31); printf("에러!!!\n"); wrong++;
            }
        }
        else if (i == 3) {
            printf("4번째 문자: F\n");
            input = _getch();
            printf("%c\n", input);
            if (input == 'F') {
                setTextColor(32); printf("완벽!!!\n"); correct++;
            }
            else {
                setTextColor(31); printf("에러!!!\n"); wrong++;
            }
        }
        else if (i == 4) {
            printf("5번째 문자: G\n");
            input = _getch();
            printf("%c\n", input);
            if (input == 'G') {
                setTextColor(32); printf("완벽!!!\n"); correct++;
            }
            else {
                setTextColor(31); printf("에러!!!\n"); wrong++;
            }
        }

        resetTextColor();
        printf("\n");
        Sleep(1000);
        i++;

    }

    setTextColor(33);
    printf("=== 결과 ===\n");
    printf("정답 수: %d\n", correct);
    printf("오답 수: %d\n", wrong);
    resetTextColor();

    return 0;
}