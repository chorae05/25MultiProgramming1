//별 5개 찍기
/*#include <stdio.h>
int main()
{
	if (1)
	{
		int i = 5;
		while (i)
		{
			printf("*\n");
			i = i - 1;
		}
	}

	return 0;
}
*/
/* 역삼각형 만들기
#include <stdio.h>
int main()
{
	int i = 1;
	int j = 1;

	while (i <=5)
	{
		j = 5;
		while (j >= i)
		{
			printf("*");
			j = j - 1;

		}
		printf("\n");
		i = i + 1;
	}
	return 0;
	*/

/*#include <stdio.h>

int main()
{
	int num1;
	int num2;

	num1 = 2 * 3;   
	num2 = 7 / 2;   

	printf("%d\n", num1);    
	printf("%d\n", num2);    

	return 0;
}
*/
//정삼각형 피라미드 만들기
/*#include <stdio.h>
int main() {
	//printf("\n5. 정삼각형\n");

	int i = 0;
	while (i < 11) {
		int j = 0;
		while (j < (11 - i)) {
			printf(" ");
			j += 2;
		}

		int k = 0;
		while (k <= i) {
			printf("*");
			k++;
		}

		printf("\n");
		i += 2;
	}

	return 0;


}
*/
	

	



