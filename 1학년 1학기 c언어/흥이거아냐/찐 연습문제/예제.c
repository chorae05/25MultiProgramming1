#include <stdio.h>      // ȭ�鿡 ���ڸ� �����ִ� ���
#include <conio.h>      // Ű���忡�� ���� 1�� �޴� ��� (_getch)
#include <windows.h>    // Sleep(1000) ���� �ð� ���߱� ���
#include <time.h>       // �ð��� ��� ���� ���� (�ð� ����)

void setTextColor(int color) {
    // ���� ���� �ٲ��ִ� �Լ� (�ʷ�/����/���)
    printf("\033[%dm", color);
}

void resetTextColor() {
    // ������ �ٽ� ������� ������ �Լ�
    printf("\033[0m");
}

int main() {
    char input;         // ����ڰ� ���� ���ڸ� ������ ����
    int correct = 0;    // ���� ������ ���� ����
    int wrong = 0;      // ���� ������ ���� ����

    // ù ��° ����: A
    //system("cls");         // ȭ�� ������ �����
    printf("A\n");              // ȭ�鿡 A ��� (1��° ��)
    clock_t start1 = clock();   // ���� �ð� ����
    int pressed1 = 0;           // Ű�� �������� Ȯ�ο�

    while (((clock() - start1) / CLOCKS_PER_SEC) < 5) {  //"���� �ð��� ���� �ð����� 5�ʺ��� ���� ���ȸ� ��� �ݺ���!"
        // 5�ʰ� ������ ������ ��� �ݺ�
        if (_kbhit()) {         // Ű���带 ������
            input = _getch();   // ���� ���ڸ� �Է¹���
            printf("%c\n", input); // 2��° ��: ���� Ű ���

            if (input == 'A') { // ���ڰ� A��
                setTextColor(32); printf("�Ϻ�!!!\n"); correct++; // �ʷϻ� + ����
            }
            else {
                setTextColor(31); printf("����!!!\n"); wrong++;   // ������ + ����
            }

            resetTextColor(); // �� �������
            pressed1 = 1;     // �����ٰ� ǥ��
            break;            // �ݺ��� ����
        }
    }

    if (!pressed1) {
        // �ƹ� �͵� �� ���� ��� (�ð� �ʰ�)
        printf("-\n");
        setTextColor(31); printf("����!!! (�ð� �ʰ�)\n"); resetTextColor(); wrong++;
    }

    printf("\n");       // �� ����
    Sleep(1000);        // 1�� ����

    // ====================
    // ���� ������� ���� 2~5 �ݺ�
    // ���ĺ��� �ٲٸ� ��!
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
                setTextColor(32); printf("�Ϻ�!!!\n"); correct++;
            }
            else {
                setTextColor(31); printf("����!!!\n"); wrong++;
            }
            resetTextColor();
            pressed2 = 1;
            break;
        }
    }
    if (!pressed2) {
        printf("-\n");
        setTextColor(31); printf("����!!! (�ð� �ʰ�)\n"); resetTextColor(); wrong++;
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
                setTextColor(32); printf("�Ϻ�!!!\n"); correct++;
            }
            else {
                setTextColor(31); printf("����!!!\n"); wrong++;
            }
            resetTextColor();
            pressed3 = 1;
            break;
        }
    }
    if (!pressed3) {
        printf("-\n");
        setTextColor(31); printf("����!!! (�ð� �ʰ�)\n"); resetTextColor(); wrong++;
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
                setTextColor(32); printf("�Ϻ�!!!\n"); correct++;
            }
            else {
                setTextColor(31); printf("����!!!\n"); wrong++;
            }
            resetTextColor();
            pressed4 = 1;
            break;
        }
    }
    if (!pressed4) {
        printf("-\n");
        setTextColor(31); printf("����!!! (�ð� �ʰ�)\n"); resetTextColor(); wrong++;
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
                setTextColor(32); printf("�Ϻ�!!!\n"); correct++;
            }
            else {
                setTextColor(31); printf("����!!!\n"); wrong++;
            }
            resetTextColor();
            pressed5 = 1;
            break;
        }
    }
    if (!pressed5) {
        printf("-\n");
        setTextColor(31); printf("����!!! (�ð� �ʰ�)\n"); resetTextColor(); wrong++;
    }
    printf("\n");
    Sleep(1000);

    // ���� ��� ���
    setTextColor(33);      // �����
    printf("=== ��� ===\n");
    printf("���� ��: %d\n", correct);  // ���� ���� ���
    printf("���� ��: %d\n", wrong);    // ���� ���� ���
    resetTextColor();      // ���� �ʱ�ȭ

    return 0;
}
