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
        printf("���� ����: %c\n", letters[i]);

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
                    setTextColor(32); // �ʷ�
                    printf("�Ϻ�!!!\n");
                    resetTextColor();
                    correct++;
                } else {
                    gotoXY(1, 3);
                    setTextColor(31); // ����
                    printf("����!!!\n");
                    resetTextColor();
                    wrong++;
                }
                matched = 1;
                break;
            }
        }

        if (!matched) {
            gotoXY(1, 3);
            setTextColor(31); // ����
            printf("����!!! (�Է� ����)\n");
            resetTextColor();
            wrong++;
        }

        gotoXY(1, 4);
        printf("\n");
        Sleep(1000);
        i++;
    }

    gotoXY(1, 5);
    setTextColor(33); // ���
    printf("=== ��� ===\n");
    printf("���� ��: %d\n", correct);
    printf("���� ��: %d\n", wrong);
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
        system("cls");  // ȭ�� ������
        printf("%c\n", target[i]);  // 1��° ��: ������ ���ĺ�

        clock_t start = clock();
        int pressed = 0;

        while (((clock() - start) / CLOCKS_PER_SEC) < 5) {
            if (_kbhit()) {
                input = _getch();
                printf("%c\n", input);  // 2��° ��: ����ڰ� ���� Ű

                if (input == target[i]) {
                    setTextColor(32);
                    printf("�Ϻ�!!!\n");
                    correct++;
                } else {
                    setTextColor(31);
                    printf("����!!!\n");
                    wrong++;
                }

                resetTextColor();
                pressed = 1;
                break;
            }
        }

        if (!pressed) {
            printf("-\n"); // ������ ���� ��� �� ��
            setTextColor(31);
            printf("����!!! (�ð� �ʰ�)\n");
            resetTextColor();
            wrong++;
        }

        printf("\n");
        Sleep(1000);
    }

    setTextColor(33);
    printf("=== ��� ===\n");
    printf("���� ��: %d\n", correct);
    printf("���� ��: %d\n", wrong);
    resetTextColor();

    return 0;
}
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>

void setTextColor(int color) {    //�� �ٲٴ� �Լ�
    printf("\033[%dm", color);
}
void resetTextColor() {    //������ �ٽ� ������� �������
    printf("\033[0m");
}

int main() {
    char input;
    int i = 0;
    int correct = 0, wrong = 0;
    while (i < 5) {
        if (i == 0) {              // ù ��° ����
            printf("1��° ����: A\n");
            input = _getch();            //�� ���� �װ� Ű����� ���� �ϳ� ������
            printf("%c\n", input);        // ���� ���� ������
            if (input == 'A') {          //a�� �´� �� Ȯ��
                setTextColor(32); printf("�Ϻ�!!!\n"); correct++;
            }
            else {
                setTextColor(31); printf("����!!!\n"); wrong++;
            }
        }
        else if (i == 1) {
            printf("2��° ����: S\n");
            input = _getch();
            printf("%c\n", input);
            if (input == 'S') {
                setTextColor(32); printf("�Ϻ�!!!\n"); correct++;
            }
            else {
                setTextColor(31); printf("����!!!\n"); wrong++;
            }
        }
        else if (i == 2) {
            printf("3��° ����: D\n");
            input = _getch();
            printf("%c\n", input);
            if (input == 'D') {
                setTextColor(32); printf("�Ϻ�!!!\n"); correct++;
            }
            else {
                setTextColor(31); printf("����!!!\n"); wrong++;
            }
        }
        else if (i == 3) {
            printf("4��° ����: F\n");
            input = _getch();
            printf("%c\n", input);
            if (input == 'F') {
                setTextColor(32); printf("�Ϻ�!!!\n"); correct++;
            }
            else {
                setTextColor(31); printf("����!!!\n"); wrong++;
            }
        }
        else if (i == 4) {
            printf("5��° ����: G\n");
            input = _getch();
            printf("%c\n", input);
            if (input == 'G') {
                setTextColor(32); printf("�Ϻ�!!!\n"); correct++;
            }
            else {
                setTextColor(31); printf("����!!!\n"); wrong++;
            }
        }

        resetTextColor();
        printf("\n");
        Sleep(1000);
        i++;

    }

    setTextColor(33);
    printf("=== ��� ===\n");
    printf("���� ��: %d\n", correct);
    printf("���� ��: %d\n", wrong);
    resetTextColor();

    return 0;
}