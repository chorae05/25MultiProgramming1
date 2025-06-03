#include <istream>
#include <stdio.h>

int main(void)
{
	//º¯¼ö ¼±¾ð
	int Korean_language = 0; //±¹¾î
	int English = 0; //¿µ¾î
	int Mathematics = 0; //¼öÇÐ
	int Total_score = 0; //ÃÑÁ¡
	int Average = 0; //Æò±Õ

	printf("\n");

	printf("\n±¹¾î : ");
	scanf_s("\t%d", &Korean_language);
	
	printf("\n¿µ¾î : ");
	scanf_s("\t%d", &English);

	printf("\n¼öÇÐ : ");
	scanf_s("\t%d", &Mathematics);

	Total_score = Korean_language + English + Mathematics;
	printf("\n\t3°ú¸ñÀÇ ÃÑÁ¡Àº %dÁ¡ÀÔ´Ï´Ù. \n", Average);

	if (90 <= Average)
	if (Average <= 100)
	{
	printf("\n\tAÇÐÁ¡, ÃÑÁ¡ : %dÁ¡, Æò±Õ : %dÁ¡ \n", Total_Score, Average);
	}
		if(80 <= Average)
		if (Average < 90)
		{
			printf("\n\tBÇÐÁ¡, ÃÑÁ¡ : %dÁ¡, Æò±Õ : %dÁ¡ \n", Total_Score, Average);
		}

		if (70 <= Average)
			if (Average < 80)
			{
				printf("\n\tCÇÐÁ¡, ÃÑÁ¡ : %dÁ¡, Æò±Õ : %dÁ¡ \n", Total_Score, Average);
			}
				if ( 60 <= Average)
				if (Average < 69)
				{
				printf("\n\tDÇÐÁ¡, ÃÑÁ¡ : %dÁ¡, Æò±Õ : %dÁ¡ \n", Total_Score, Average);
				}
				
					if (0 <= Average)
					if (Average < 59)
					{
						printf("\n\tFÇÐÁ¡, ÃÑÁ¡ : %dÁ¡, Æò±Õ : %dÁ¡ \n", Total_Score, Average);
					}
					if
					{
						printf("\n\tF¿¡·¯F\n\n\n");
					}

}

