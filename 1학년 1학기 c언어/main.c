#include <stdio.h>

//0���� 100���� 2�� ����� ����ϼ���

int main()
{
	int i = 0;

	while (i < 101)
	{
		if (i % 2 == 0)
		{
			if (i >= 2)
			{
				printf("%d\n", i);
			}
		}
		i = i + 1;
	}
}