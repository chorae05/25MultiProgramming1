#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

int main() {
    int count = 0; // ���� Ƚ�� ����
    time_t start = time(NULL); // ���� �ð� ����

    printf("10�� ���� �ƹ� Ű�� ����������!\n");

    // ���� �ð����� ���� �ð��� �� ���� 10���� ���� ���� �ݺ�
    while (time(NULL) - start < 10) {
        if (_kbhit()) {      // Ű�� ���ȴ��� Ȯ��
            _getch();        // ���� Ű�� �������� ȭ�鿡�� ǥ������ ����
            count++;         // Ű�� ���� ������ count ����
        }
        Sleep(10);           // CPU ������ �ּ�ȭ�� ���� ��� (0.01��)
    }

    printf("\n�ð� ����!\n");
    printf("�� ���� Ƚ��: %d\n", count);

    return 0;
}

/*
10�ʵ��� ���� Ƚ���� �����ϸ鼭 ���� �� ����ϰ� �ϴ� ����
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

int main() {
    int count = 0; // ���� Ƚ�� ����
    time_t start = time(NULL); // ���� �ð� ����

    printf("10�� ���� �ƹ� Ű�� ����������!\n");

    while (time(NULL) - start < 10) {
        if (_kbhit()) {
            char ch = _getch();  // Ű �Է� �ޱ�
            putchar(ch);         // �Էµ� ���� ���
            count++;             // ���� ������ ����
        }
        Sleep(10); // CPU ������ ����
    }

    printf("\n�ð� ����!\n");
    printf("�� ���� Ƚ��: %d\n", count);

    return 0;
}
*/
