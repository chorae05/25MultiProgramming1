#include <stdio.h>      // 화면에 글자를 보여주는 기능
#include <conio.h>      // 키보드에서 글자 1개 받는 기능 (_getch)
#include <windows.h>    // Sleep(1000) 같은 시간 멈추기 기능
#include <time.h>       // 시간을 재기 위한 도구 (시간 제한)

void setTextColor(int color) {
    // 글자 색을 바꿔주는 함수 (초록/빨강/노랑)
    printf("\033[%dm", color);
}

void resetTextColor() {
    // 색깔을 다시 원래대로 돌리는 함수
    printf("\033[0m");
}

int main() {
    char input;         // 사용자가 누른 글자를 저장할 공간
    int correct = 0;    // 정답 개수를 세는 숫자
    int wrong = 0;      // 오답 개수를 세는 숫자

    // 첫 번째 문제: A
    //system("cls");         // 화면 깨끗이 지우기
    printf("A\n");              // 화면에 A 출력 (1번째 줄)
    clock_t start1 = clock();   // 시작 시간 저장
    int pressed1 = 0;           // 키를 눌렀는지 확인용

    while (((clock() - start1) / CLOCKS_PER_SEC) < 5) {  //"지금 시간이 시작 시간보다 5초보다 작을 동안만 계속 반복해!"
        // 5초가 지나기 전까지 계속 반복
        if (_kbhit()) {         // 키보드를 누르면
            input = _getch();   // 누른 글자를 입력받음
            printf("%c\n", input); // 2번째 줄: 누른 키 출력

            if (input == 'A') { // 글자가 A면
                setTextColor(32); printf("완벽!!!\n"); correct++; // 초록색 + 정답
            }
            else {
                setTextColor(31); printf("에러!!!\n"); wrong++;   // 빨강색 + 오답
            }

            resetTextColor(); // 색 원래대로
            pressed1 = 1;     // 눌렀다고 표시
            break;            // 반복문 종료
        }
    }

    if (!pressed1) {
        // 아무 것도 안 누른 경우 (시간 초과)
        printf("-\n");
        setTextColor(31); printf("에러!!! (시간 초과)\n"); resetTextColor(); wrong++;
    }

    printf("\n");       // 줄 띄우기
    Sleep(1000);        // 1초 쉬기

    // ====================
    // 같은 방식으로 문제 2~5 반복
    // 알파벳만 바꾸면 됨!
    // ====================

    //system("cls");
    printf("S\n");
    clock_t start2 = clock();
    int pressed2 = 0;
    while (((clock() - start2) / CLOCKS_PER_SEC) < 5) {
        if (_kbhit()) {
            input = _getch();
            printf("%c\n", input);
            if (input == 'S') {
                setTextColor(32); printf("완벽!!!\n"); correct++;
            }
            else {
                setTextColor(31); printf("에러!!!\n"); wrong++;
            }
            resetTextColor();
            pressed2 = 1;
            break;
        }
    }
    if (!pressed2) {
        printf("-\n");
        setTextColor(31); printf("에러!!! (시간 초과)\n"); resetTextColor(); wrong++;
    }
    printf("\n");
    Sleep(1000);

    //system("cls");
    printf("D\n");
    clock_t start3 = clock();
    int pressed3 = 0;
    while (((clock() - start3) / CLOCKS_PER_SEC) < 5) {
        if (_kbhit()) {
            input = _getch();
            printf("%c\n", input);
            if (input == 'D') {
                setTextColor(32); printf("완벽!!!\n"); correct++;
            }
            else {
                setTextColor(31); printf("에러!!!\n"); wrong++;
            }
            resetTextColor();
            pressed3 = 1;
            break;
        }
    }
    if (!pressed3) {
        printf("-\n");
        setTextColor(31); printf("에러!!! (시간 초과)\n"); resetTextColor(); wrong++;
    }
    printf("\n");
    Sleep(1000);

    //system("cls");
    printf("F\n");
    clock_t start4 = clock();
    int pressed4 = 0;
    while (((clock() - start4) / CLOCKS_PER_SEC) < 5) {
        if (_kbhit()) {
            input = _getch();
            printf("%c\n", input);
            if (input == 'F') {
                setTextColor(32); printf("완벽!!!\n"); correct++;
            }
            else {
                setTextColor(31); printf("에러!!!\n"); wrong++;
            }
            resetTextColor();
            pressed4 = 1;
            break;
        }
    }
    if (!pressed4) {
        printf("-\n");
        setTextColor(31); printf("에러!!! (시간 초과)\n"); resetTextColor(); wrong++;
    }
    printf("\n");
    Sleep(1000);

    //system("cls");
    printf("G\n");
    clock_t start5 = clock();
    int pressed5 = 0;
    while (((clock() - start5) / CLOCKS_PER_SEC) < 5) {
        if (_kbhit()) {
            input = _getch();
            printf("%c\n", input);
            if (input == 'G') {
                setTextColor(32); printf("완벽!!!\n"); correct++;
            }
            else {
                setTextColor(31); printf("에러!!!\n"); wrong++;
            }
            resetTextColor();
            pressed5 = 1;
            break;
        }
    }
    if (!pressed5) {
        printf("-\n");
        setTextColor(31); printf("에러!!! (시간 초과)\n"); resetTextColor(); wrong++;
    }
    printf("\n");
    Sleep(1000);

    // 최종 결과 출력
    setTextColor(33);      // 노란색
    printf("=== 결과 ===\n");
    printf("정답 수: %d\n", correct);  // 정답 개수 출력
    printf("오답 수: %d\n", wrong);    // 오답 개수 출력
    resetTextColor();      // 색상 초기화

    return 0;
}
