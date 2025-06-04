#include<stdio.h>

/*int main() {
	int i = 0;
	int sum = 0;
	while (i < 100)
	{
		sum = sum + (i + 1);
		i++;

	}
	printf("รัวี : %d", sum);
}
int main() {
	int i = 0;
	int sum = 0;
	while (1) {
		sum = sum + (i + 1);
		i++;
		if (i > 99)
			break;
	}
	printf("รัวี : %d", sum);
}*/

int main() {
	int num = 2;

	while (num <= 100) {
		int i = 2;
		int isPrime = 1;

		while (i < num && isPrime == 1) {
			if (num % i == 0) {
				isPrime = 0;  
			}
			i++;
		}

		if (isPrime == 1) {
			printf("%d\n ", num);
		}

		num++;
	}

	return 0;
}

