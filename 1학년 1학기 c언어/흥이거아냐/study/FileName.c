#include <stdio.h>
#include <time.h>
#include <windows.h>
void gotoxy(int x, int y);
//초래가 빵순이입니다. 빵을 500개 먹는 프로그램을 작성하세요.
//1번빵 먹음..
//2번빵 먹음..
//~~
//500번빵 먹음..

//조건과 반복

//500까지 의 짝수의 합을 구하라
int main() {
	/*
	clock_t start, end;
	double cpu_time_used;

	start = clock();

	int i;
	i = 1;
	while (i <= 10)
	{
		printf("빵이 %d개 생성됨\n", i);
		i++;
	}
	end = clock();

	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("10개 생산에 %f초 걸렸습니다", cpu_time_used);


	clock_t start, end;
	double cpu_time_used;

	start = clock();

	int word = 'A'; // 97
	while (word <= 'Z') {
		printf("%c 연산진행중..\n", word);
		word++;
	}
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("10개 생산에 %f초 걸렸습니다", cpu_time_used);

	printf("문자를 입력하셈 : ");
	char c = getchar();
	printf("%c 입력햇넹 ㅋ",c); //한글자를 저장시켜준다
	*/
	/*
	야라고 입력하면 100ms뒤에 왜? 라고 대답하고 대답시간이 얼마나 걸렸는지 출력하세요.
	
	
	
	
	
	
	
	
	clock_t start, end;
	double cpu_time_used;

	start = clock();

	char c = getch();
		printf("야");
		sleep(100);
			printf("왜");
			


		
	
	end = clock();

	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("10개 생산에 %f초 걸렸습니다", cpu_time_used);


	clock_t start, end;
	double cpu_time_used;

	start = clock();
	

	

	//빵이 1개 굽는중.. 이게 10개까지 나와야함.
	//굽는 시간 정해야함.
	//한번 굽고 100ms 쉬어야함.
	//굽는 시간 출력해야함.
	clock_t start, end;
	double cpu_time_used;

	start = clock();

	int i = 0;
	while (i <= 10) {
		printf("빵이 %d개 굽는중..\n", i);
		Sleep(100);
		i++;
	}
	end = clock();

	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("굽는 시간은 %f초 걸렸습니다", cpu_time_used);
	return 0;
	

	//야라고 입력할때만 100ms 뒤에 왜 라고 입력하고 대답에 소요된 시간을 출력하세요.

	//소요된 시간출력해야한다.
	//야라고 입력할때만100ms 뒤에 왜라고 대답하기
clock_t start, end;
double cpu_time_used;

start = clock();
//야라고 입력받기
char ya = getchar();

if (ya == 'y'){
	printf("야");
	Sleep(1000);
	printf("\n왜\n");
}

else if (ya == 'n') {
	printf("노");
	Sleep(1000);
	printf("\n왜\n");
}

else if (ya == 'a') {
	printf("아");
	Sleep(1000);
	printf("\n왜\n");
}
else {

}
end = clock();

cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
printf("처음 대답 시작 시간은 : %d 초\n나중 대답 시간은대답 시간은 : %d초\n총 %f초 걸렸습니다",start / CLOCKS_PER_SEC, end / CLOCKS_PER_SEC, cpu_time_used
);*/
//첫번쨰줄, 다섯번째줄은 별이 다섯개
//2,3,4는 별띄어쓰기띄어쓰기

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