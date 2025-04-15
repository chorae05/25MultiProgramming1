#include <stdio.h>

int main(void)
{
    // º¯¼ö ¼±¾ð
    int Korean_language = 0; // ±¹¾î
    int English = 0;         // ¿µ¾î
    int Mathematics = 0;     // ¼öÇÐ
    int Total_score;         // ÃÑÁ¡
    int Average;             // Æò±Õ

    printf("\n");

    printf("\n±¹¾î : ");
    scanf_s("%d", &Korean_language);

    printf("\n¿µ¾î : ");
    scanf_s("%d", &English);

    printf("\n¼öÇÐ : ");
    scanf_s("%d", &Mathematics);

    Total_score = Korean_language + English + Mathematics;
    Average = Total_score / 3;

    printf("\n\t3°ú¸ñÀÇ ÃÑÁ¡Àº %dÁ¡ÀÔ´Ï´Ù. \n", Total_score);
    printf("\tÆò±ÕÀº %dÁ¡ÀÔ´Ï´Ù. \n", Average);

    if (90 <= Average && Average <= 100)
    {
        printf("\n\tAÇÐÁ¡, ÃÑÁ¡ : %dÁ¡, Æò±Õ : %dÁ¡ \n", Total_score, Average);
    }
    else if (80 <= Average && Average < 90)
    {
        printf("\n\tBÇÐÁ¡, ÃÑÁ¡ : %dÁ¡, Æò±Õ : %dÁ¡ \n", Total_score, Average);
    }
    else if (70 <= Average && Average < 80)
    {
        printf("\n\tCÇÐÁ¡, ÃÑÁ¡ : %dÁ¡, Æò±Õ : %dÁ¡ \n", Total_score, Average);
    }
    else if (60 <= Average && Average < 70)
    {
        printf("\n\tDÇÐÁ¡, ÃÑÁ¡ : %dÁ¡, Æò±Õ : %dÁ¡ \n", Total_score, Average);
    }
    else if (0 <= Average && Average < 60)
    {
        printf("\n\tFÇÐÁ¡, ÃÑÁ¡ : %dÁ¡, Æò±Õ : %dÁ¡ \n", Total_score, Average);
    }
    else
    {
        printf("\n\tF¿¡·¯F\n\n\n");
    }

    return 0;
}