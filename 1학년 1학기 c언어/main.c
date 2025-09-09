#include <stdio.h>

//0부터 100꺄지 2의 배수를 출력하세요

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