#include <istream>
#include <stdio.h>

int main(void)
{
	//���� ����
	int Korean_language = 0; //����
	int English = 0; //����
	int Mathematics = 0; //����
	int Total_score = 0; //����
	int Average = 0; //���

	printf("\n");

	printf("\n���� : ");
	scanf_s("\t%d", &Korean_language);
	
	printf("\n���� : ");
	scanf_s("\t%d", &English);

	printf("\n���� : ");
	scanf_s("\t%d", &Mathematics);

	Total_score = Korean_language + English + Mathematics;
	printf("\n\t3������ ������ %d���Դϴ�. \n", Average);

	if (90 <= Average)
	if (Average <= 100)
	{
	printf("\n\tA����, ���� : %d��, ��� : %d�� \n", Total_Score, Average);
	}
		if(80 <= Average)
		if (Average < 90)
		{
			printf("\n\tB����, ���� : %d��, ��� : %d�� \n", Total_Score, Average);
		}

		if (70 <= Average)
			if (Average < 80)
			{
				printf("\n\tC����, ���� : %d��, ��� : %d�� \n", Total_Score, Average);
			}
				if ( 60 <= Average)
				if (Average < 69)
				{
				printf("\n\tD����, ���� : %d��, ��� : %d�� \n", Total_Score, Average);
				}
				
					if (0 <= Average)
					if (Average < 59)
					{
						printf("\n\tF����, ���� : %d��, ��� : %d�� \n", Total_Score, Average);
					}
					if
					{
						printf("\n\tF����F\n\n\n");
					}

}

