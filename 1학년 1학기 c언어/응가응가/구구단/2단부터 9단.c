#include <stdio.h>
int main()
{
	int i = 2;
	

	while (i <= 9)
	{
		int j = 1;

		printf(" --%d´Ü--\n", i);

		while (j<=9)
		{
			printf("%d x %d = %d\n", i, j, i * j);
			j++;

		}
		printf("\n");

		i++;
	}
	return 0;
}