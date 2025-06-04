/*
한문자를 입력받아서 q가 입력될때까지 입력받은 문자를 반복해서 출력하는 프로그램 작성
예시)

한글자 입력하세요 (q입력시 종료): a
a
한글자 입력하세요 (q입력시 종료): b
b
한글자 입력하세요 (q입력시 종료): q
종료

*/
// 한글자를 입력하는 갯캐릭터 쓰기. 입력받은 문자를 반복하는 while문 쓰기.
// q가 나올 떄는 p, 다른 게 나오면 입력 받은 문자 그대로 출력하기

#include<stdio.h>
#include<windows.h>

int main(){
	char c = 'a';
	while (c != 'q') {

		printf("한글자 입력하세요 : ");
		c = getchar();
		if (c == 'q') {
			printf("종료");
		}
		else {
			printf("%c\n", c);

			c = getchar();
		}
		

	}
	
}