/*
*
**
***
****
*****
큰 거 : *\n씩 밑으로 내려가게 하기 작은 While : 큰 와일이 내려갈 떄 1개씩 더해진다.
*/
#include<stdio.h>

int main() {
	int rowCount = 1;
	while (rowCount <= 5) {
		/*
		printf("*\n");
		i = i + 1;

		int j = 1;
		while (j <= i) {
			printf("*");
			j = j + 1;
		}*/
		int starCount = 1;
		while (starCount <= rowCount) {
			printf("*");
			starCount = starCount + 1;
		}
		printf("\n");
		rowCount = rowCount + 1;
	
	}
	printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");
	/*
***** 1:5
****  2:4
***   3:3
**	  4;2
*     5:1
      6:0


*/
		int i = 1;
		while (i <=5 ) {
			int j = 6-i;
			while (j>0) {
				printf("*");
				j = j - 1;
			}
			printf("\n");
			i = i + 1;
			}

	
		


}