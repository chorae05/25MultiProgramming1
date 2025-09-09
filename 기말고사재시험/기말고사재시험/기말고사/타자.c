#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <time.h>

void gotoXY(int x, int y) {
    printf("\033[%d;%dH", y, x);
    fflush(stdout);
}

void setTextColor(int color) {
    printf("\033[%dm", color);
    fflush(stdout);
}

void resetTextColor() {
    printf("\033[0m");
    fflush(stdout);
}

void startUnderline() {
    printf("\033[4m");
    fflush(stdout);
}

void endUnderline() {
    printf("\033[24m");
    fflush(stdout);
}

int main() {
    char target[] = "Love!!";
    char input[100] = "";
    int index = 0;
    int correct = 0;
    int total_keys = 0;
    time_t start_time = time(NULL);

    gotoXY(0, 1);
    setTextColor(37);
    printf("%s", target);
    resetTextColor();

    while (1) {
        char ch = _getch();

        if (ch == 13) break;

        if (ch != 8) total_keys++;  // �齺���̽� ������ Ű�� ī��Ʈ

        if (ch == 8 && index > 0) {
            index--;
            input[index] = '\0';

            gotoXY(0, 2);
            for (int i = 0; i < strlen(target); i++) printf(" ");
            gotoXY(0, 2);

            correct = 0;
            for (int i = 0; i < index; i++) {
                if (input[i] == target[i]) {
                    setTextColor(37);
                    printf("%c", input[i]);
                    correct++;
                }
                else {
                    setTextColor(31); startUnderline();
                    printf("%c", input[i]);
                    endUnderline();
                }
                resetTextColor();
            }

        }
        else if (ch != 8) {
            input[index] = ch;
            input[index + 1] = '\0';

            gotoXY(index, 2);
            if (ch == target[index]) {
                setTextColor(37);
                printf("%c", ch);
                correct++;
            }
            else {
                setTextColor(31); startUnderline();
                printf("%c", ch);
                endUnderline();
            }
            resetTextColor();

            index++;
        }

        time_t current_time = time(NULL);
        double elapsed = difftime(current_time, start_time);
        double current_speed = (elapsed > 0) ? ((double)total_keys / elapsed) * 60.0 : 0;

        gotoXY(0, 4);
        setTextColor(32);
        printf("���� Ÿ�� (1�� ����): %.0f Ÿ     ", current_speed);
        resetTextColor();
    }

    time_t end_time = time(NULL);
    double duration = difftime(end_time, start_time);
    double speed = (duration > 0) ? ((double)total_keys / duration) * 60.0 : 0;

    gotoXY(0, 6);
    setTextColor(33);
    printf("���� ���:\n");
    printf("�� Ÿ��: %d Ÿ\n", total_keys);
    printf("���� ���� ��: %d\n", correct);
    printf("��ü ���� ��: %d\n", strlen(target));
    printf("Ʋ�� ���� ��: %d\n", total_keys - correct);
    printf("�Է� �ð�(��): %.0f\n", duration);
    printf("Ÿ�� ��� ��� (1�д� ���� ��): %.0f Ÿ\n", speed);
    resetTextColor();

    return 0;
}