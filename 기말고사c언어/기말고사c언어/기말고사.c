#include<stdio.h>
#include<windows.h>

void setTextColor(int color) {
	printf("\033[%dm", color); // 31=����, 32=�ʷ�, 33=���, 37=��� ��
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


int main() {
	char c = 'a';
	while (c != 'q') {

		printf("�ѱ��ڸ� �Է��ϼ��� : ");

		c = getchar();

		if (c == 'q') {
			printf("����");
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


//3�� ��¥ �ʹ� ���� �ϱ� �Ⱦ���.�ٸ� �ֵ��� �׳� �ǽ� �� �ϰ� ���� ���ڴ�