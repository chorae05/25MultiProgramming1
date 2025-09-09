#include <stdio.h>
#include <windows.h>
#include <time.h>


int main() {

    clock_t start, end;  //시간정보저장하기 위해 start, end필요 
    double cpu_time_used;

    start = clock();
    char ch = 'a';   // 먼저 ch에 a를 넣고 시작

    while (ch <= 'z') {   // ch가 z보다 작거나 같을 때만 반복
        printf("%c \n", ch);   // 현재 글자 출력
        Sleep(100);
        ch++;   // 다음 글자로 넘기기 (예: a → b → c ...)
    }

    printf("\n");
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("시작시간 %f\n끝난시간 %f\n총 걸린 시간 :%f\n",
        (double)start / CLOCKS_PER_SEC, (double)end / CLOCKS_PER_SEC, cpu_time_used);
    return 0;
}
