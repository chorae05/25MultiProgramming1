#include <stdio.h>

int main(void)
{
    // ���� ����
    int Korean_language = 0; // ����
    int English = 0;         // ����
    int Mathematics = 0;     // ����
    int Total_score;         // ����
    int Average;             // ���

    printf("\n");

    printf("\n���� : ");
    scanf_s("%d", &Korean_language);

    printf("\n���� : ");
    scanf_s("%d", &English);

    printf("\n���� : ");
    scanf_s("%d", &Mathematics);

    Total_score = Korean_language + English + Mathematics;
    Average = Total_score / 3;

    printf("\n\t3������ ������ %d���Դϴ�. \n", Total_score);
    printf("\t����� %d���Դϴ�. \n", Average);

    if (90 <= Average && Average <= 100)
    {
        printf("\n\tA����, ���� : %d��, ��� : %d�� \n", Total_score, Average);
    }
    else if (80 <= Average && Average < 90)
    {
        printf("\n\tB����, ���� : %d��, ��� : %d�� \n", Total_score, Average);
    }
    else if (70 <= Average && Average < 80)
    {
        printf("\n\tC����, ���� : %d��, ��� : %d�� \n", Total_score, Average);
    }
    else if (60 <= Average && Average < 70)
    {
        printf("\n\tD����, ���� : %d��, ��� : %d�� \n", Total_score, Average);
    }
    else if (0 <= Average && Average < 60)
    {
        printf("\n\tF����, ���� : %d��, ��� : %d�� \n", Total_score, Average);
    }
    else
    {
        printf("\n\tF����F\n\n\n");
    }

    return 0;
}