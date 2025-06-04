/*
한문자를 입력받아서 q가 입력될때까지 입력받은 문자를 반복해서 출력하는 프로그램 작성
예시)

한글자 입력하세요 (q입력시 종료): a
a
한글자 입력하세요 (q입력시 종료): b
b
한글자 입력하세요 (q입력시 종료): q
종료


// 한글자를 입력하는 갯캐릭터 쓰기. 입력받은 문자를 반복하는 while문 쓰기.
// q가 나올 떄는 p, 다른 게 나오면 입력 받은 문자 그대로 출력하기

#include<stdio.h>
#include<windows.h>

int main(){
	char c = 'a'; //변수 선언 초기화함
	while (c != 'q') {  // q가 입력되기 전까지 반복

		printf("한글자 입력하세요 : ");  // 사용자에게 문자 입력 요청
		c = getchar();  // 첫 입력 (문자 1개 + 엔터 포함)
		if (c == 'q') {  // 입력한 문자가 q면
			printf("종료");  // "종료" 출력하고 while 종료
		}
		else {   
			printf("%c\n", c);  // 입력한 문자 출력

			c = getchar();  // 추가로 한번 더 getchar(); (버퍼 정리용)
		}
		

	}
	return 0;

한글자 입력하세요 (q입력시 종료): a
a
한글자 입력하세요 (q입력시 종료): b
b
한글자 입력하세요 (q입력시 종료): q
종료

//한글자를 입력하는 갯캐릭터 쓰기, q입력시 종료라는 if문 넣기 while문으로 q가 아닐 때 넣기, 

•	프로그램을 실행하면 "10초 동안 아무 키나 눌러보세요!"가 출력됨
•	사용자는 키를 반복해서 입력
•	10초가 지나면 입력을 멈추고 총 입력 횟수를 출력
________________________________________
📌 예시 실행:
10초 동안 아무 키나 눌러보세요!

(사용자가 막 누름)

시간 종료!
총 눌린 횟수: 34

________________________________________
📌 구현 요구사항 및 배점 (총 30점)
번호	구현 요소	배점
①	time() 또는 clock()을 사용해 10초 측정 구현	10점
②	getch() 또는 _kbhit()를 이용해 키 입력 감지	10점
③	누를 때마다 count++ 증가, 최종 결과 출력	10점
________________________________________

}*/
#include<stdio.h>
#include<windows.h>

void setTextColor(int color) {
	printf("\033[%dm", color); // 31=빨강, 32=초록, 33=노랑, 37=흰색 등
}
void resetTextColor() {
	printf("\033[0m");
}

void startUnderline() {
	printf("\033[4m");
}


void endUnderline() {
	printf("\033[24m");
}


int main(){
	char c='a';
	while (c != 'q') {

		printf("한글자를 입력하세요 : ");

		c = getchar();

		if (c == 'q') {
			printf("종료");
		}
		else {
			setTextColor(31);
			startUnderline();
			printf("%c\n", c);
			resetTextColor();
			endUnderline();

		c = getchar();
		}

	}
	
}
