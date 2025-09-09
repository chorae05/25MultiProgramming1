#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

int main() {
    int count = 0; // 눌린 횟수 저장
    time_t start = time(NULL); // 시작 시간 저장

    printf("10초 동안 아무 키나 눌러보세요!\n");

    // 현재 시간에서 시작 시간을 뺀 값이 10보다 작은 동안 반복
    while (time(NULL) - start < 10) {
        if (_kbhit()) {      // 키가 눌렸는지 확인
            _getch();        // 실제 키를 가져오되 화면에는 표시하지 않음
            count++;         // 키가 눌릴 때마다 count 증가
        }
        Sleep(10);           // CPU 점유율 최소화를 위한 대기 (0.01초)
    }

    printf("\n시간 종료!\n");
    printf("총 눌린 횟수: %d\n", count);

    return 0;
}

/*
10초동안 눌린 횟수를 저장하면서 눌린 걸 출력하게 하는 문장
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

int main() {
    int count = 0; // 눌린 횟수 저장
    time_t start = time(NULL); // 시작 시간 저장

    printf("10초 동안 아무 키나 눌러보세요!\n");

    while (time(NULL) - start < 10) {
        if (_kbhit()) {
            char ch = _getch();  // 키 입력 받기
            putchar(ch);         // 입력된 문자 출력
            count++;             // 누를 때마다 증가
        }
        Sleep(10); // CPU 과부하 방지
    }

    printf("\n시간 종료!\n");
    printf("총 눌린 횟수: %d\n", count);

    return 0;
}
*/
