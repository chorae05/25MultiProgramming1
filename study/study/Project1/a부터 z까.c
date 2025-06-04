#include <stdio.h>
#include <windows.h>
#include <time.h>


int main() {

    clock_t start, end;  //�ð����������ϱ� ���� start, end�ʿ� 
    double cpu_time_used;

    start = clock();
    char ch = 'a';   // ���� ch�� a�� �ְ� ����

    while (ch <= 'z') {   // ch�� z���� �۰ų� ���� ���� �ݺ�
        printf("%c \n", ch);   // ���� ���� ���
        Sleep(100);
        ch++;   // ���� ���ڷ� �ѱ�� (��: a �� b �� c ...)
    }

    printf("\n");
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("���۽ð� %f\n�����ð� %f\n�� �ɸ� �ð� :%f\n",
        (double)start / CLOCKS_PER_SEC, (double)end / CLOCKS_PER_SEC, cpu_time_used);
    return 0;
}
