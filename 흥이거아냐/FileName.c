#include <stdio.h>
#include <time.h>
#include <windows.h>
void gotoxy(int x, int y);
//�ʷ��� �������Դϴ�. ���� 500�� �Դ� ���α׷��� �ۼ��ϼ���.
//1���� ����..
//2���� ����..
//~~
//500���� ����..

//���ǰ� �ݺ�

//500���� �� ¦���� ���� ���϶�
int main() {
	/*
	clock_t start, end;
	double cpu_time_used;

	start = clock();

	int i;
	i = 1;
	while (i <= 10)
	{
		printf("���� %d�� ������\n", i);
		i++;
	}
	end = clock();

	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("10�� ���꿡 %f�� �ɷȽ��ϴ�", cpu_time_used);


	clock_t start, end;
	double cpu_time_used;

	start = clock();

	int word = 'A'; // 97
	while (word <= 'Z') {
		printf("%c ����������..\n", word);
		word++;
	}
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("10�� ���꿡 %f�� �ɷȽ��ϴ�", cpu_time_used);

	printf("���ڸ� �Է��ϼ� : ");
	char c = getchar();
	printf("%c �Է��޳� ��",c); //�ѱ��ڸ� ��������ش�
	*/
	/*
	�߶�� �Է��ϸ� 100ms�ڿ� ��? ��� ����ϰ� ���ð��� �󸶳� �ɷȴ��� ����ϼ���.
	
	
	
	
	
	
	
	
	clock_t start, end;
	double cpu_time_used;

	start = clock();

	char c = getch();
		printf("��");
		sleep(100);
			printf("��");
			


		
	
	end = clock();

	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("10�� ���꿡 %f�� �ɷȽ��ϴ�", cpu_time_used);


	clock_t start, end;
	double cpu_time_used;

	start = clock();
	

	

	//���� 1�� ������.. �̰� 10������ ���;���.
	//���� �ð� ���ؾ���.
	//�ѹ� ���� 100ms �������.
	//���� �ð� ����ؾ���.
	clock_t start, end;
	double cpu_time_used;

	start = clock();

	int i = 0;
	while (i <= 10) {
		printf("���� %d�� ������..\n", i);
		Sleep(100);
		i++;
	}
	end = clock();

	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("���� �ð��� %f�� �ɷȽ��ϴ�", cpu_time_used);
	return 0;
	

	//�߶�� �Է��Ҷ��� 100ms �ڿ� �� ��� �Է��ϰ� ��信 �ҿ�� �ð��� ����ϼ���.

	//�ҿ�� �ð�����ؾ��Ѵ�.
	//�߶�� �Է��Ҷ���100ms �ڿ� �ֶ�� ����ϱ�
clock_t start, end;
double cpu_time_used;

start = clock();
//�߶�� �Է¹ޱ�
char ya = getchar();

if (ya == 'y'){
	printf("��");
	Sleep(1000);
	printf("\n��\n");
}

else if (ya == 'n') {
	printf("��");
	Sleep(1000);
	printf("\n��\n");
}

else if (ya == 'a') {
	printf("��");
	Sleep(1000);
	printf("\n��\n");
}
else {

}
end = clock();

cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
printf("ó�� ��� ���� �ð��� : %d ��\n���� ��� �ð������ �ð��� : %d��\n�� %f�� �ɷȽ��ϴ�",start / CLOCKS_PER_SEC, end / CLOCKS_PER_SEC, cpu_time_used
);*/
//ù������, �ټ���°���� ���� �ټ���
//2,3,4�� ���������

int x = 0, y = 0;
while (1) {
	gotoxy(x, y);
	printf("*");
	Sleep(100);
	if (x < 5 && y < 5) {
		if (y==0)
	}
	
}
return 0;
}
//00 01 02 03 04 14 24 34 44 43 42 41 40 30 20 10 
void gotoxy(int x, int y)

{

	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}