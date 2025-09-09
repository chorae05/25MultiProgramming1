#include <stdio.h>

void main() {
	int a = 0;
	int* p = &a;
	int** pp = &p;
	int*** ppp = &pp;

	int** aa = NULL;
	ppp = &aa;
	/*
	printf("%d\n%d", &a, p);

	printf("\n%d", *p);

	printf("\n%d", **ppp);
	*/
	*p = 333;
	printf("%d\n", a);

	int arr[3] = { 100,200,300 };

	printf("%d\n", *(arr + 1));



}