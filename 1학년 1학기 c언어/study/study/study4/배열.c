#include <stdio.h>
#include <conio.h>
#include <windows.h>

void setTextColor(int color) {
    printf("\033[%dm", color);
}
void resetTextColor() {
    printf("\033[0m");
}

int main() {
    char letters[5] = { 'A', 'S', 'D', 'F', 'G' };
    char input;//변수이름
    int i = 0;                                      //인덱스 0부터 시작하므로
    int correct = 0, wrong = 0;

    while (i < 5) {                                       //while 문에 안에서 돈다
       
        printf("%d번째 문자: %c\n", i + 1, letters[i]);  // 1. 문제 보여주기( i +1인 이유) 사람 눈에 보이는 순서 (1부터 시작) 맞추려고)
        input = _getch();                            // 2. 키 누를 때까지 기다렸다가, 입력값 저장
        printf("%c\n", input);                        // 3. 입력된 문자 출력

        // 4. 맞았는지 확인
        if (input == letters[i]) {
            setTextColor(32);
            printf("완벽!!!\n");
            correct++;
        }
        else {
            setTextColor(31);
            printf("에러!!!\n");
            wrong++;
        }
        resetTextColor();
        printf("\n");
        Sleep(1000);
        i++;
    }                                           //while 문 끝

    setTextColor(33);
    printf("=== 결과 ===\n");
    printf("정답 수: %d\n", correct);
    printf("오답 수: %d\n", wrong);
    resetTextColor();

    return 0;
}
