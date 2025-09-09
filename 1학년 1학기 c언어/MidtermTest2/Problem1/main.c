#include <stdio.h>

int PassOrFail(int score) {
    return (score >= 50) ? 1 : 0;
}

int main() {
    int score;

    // 예상 점수를 입력받음
    printf("예상 점수를 입력하세요: ");
    scanf_s("%d", &score);


    // 결과에 따른 메시지 출력
    if (PassOrFail(score)) {
        printf("재시험 없습니다!\n");
    }
    else {
        printf("재시험 있습니다\n");
    }

    return 0;
}

