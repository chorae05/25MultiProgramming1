/*#include <stdio.h>
int main()
{
//0부터 100까지 짞수를 출력하시오
	//1. +2 씩 하면 된다.
	//2. 2로 나누고 나머지가 0임
printf("=========================================1번=======================================\n");
int number2 = 2;
 while (number2 < 101) {
	printf("%d\n", number2);
	number2 = number2 + 2;
}
printf("=========================================2번=======================================\n");
int i = 0;
//2보다 작을때는 출력을 안해야한다.
//2보다 클때 출력을 해야한다.
while (i < 101) {
	if (i % 2 == 0) {
		if (i >= 2) {
			printf("%d\n", i);
		}

	}
	i = i + 1;
}
}
*/

/*#include <stdio.h>
int main()
{
	//0부터 1000까지 숫자중 3의 배수를 출력하세요.
	//*3일 떄 출력해야 한다
	//3으로 나눈 나머지의 값이 0이 되어야 한다. 

	int i = 3;
	while (i < 101)
	{
		printf("%d\n", i);
		i = i + 3;
	}

	int j = 0;
	while (j < 101)
	{
		if (j % 3 == 0)
		{
			if (j >= 3)
			{
				printf("%d\n", j);

			}
			j = j + 3;
		}
	}


	return 0;
}
	*/


//1부터 100까지의 합은 5050입니다/..
#include <stdio.h>

int main()
{
	int i, sum;
	i = 1;
	sum = 0;

	while (i <= 100)
	{
		sum += i;

		i++;
	}
	printf("1부터 100까지의 합은 %d입니다.", sum);

	return 0;

}

