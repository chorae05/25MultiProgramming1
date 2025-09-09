/*
초래가 빵집에서 식빵을 500개 샀습니다
초래는 오늘 500개를 다먹고 탄수화물 중독되고 싶어해요
빵한개를 먹고 1ms 쉰대요
빵을 하나 먹을떄마다 빵이 몇개남았는지 출력하고 빵을 다먹은 시간을 구해서 출력하세요.

예시)
빵먹는중 .. 남은 빵개수 : 499
빵먹는중 .. 남은 빵개수 : 498
...
빵 먹는중 .. 남은 빵개수 : 0
다먹었따.
빵먹기 시작한 시간 : ~~
빵 다 먹은 시간 : ~~
총 먹는데 걸린 시간 : ~~
*/
//500개의 빵부터 0까지 하나씩 감소. + 빵의 개수 출력,
// 1개 감소하는 동안 1ms씩 쉬기(sleep), 
// 처음 먹은 시간, 다 먹은 시간 출력, 먹는데 걸린 시간 출력

#include<stdio.h>
#include<time.h>
#include<windows.h>

int main() {
	clock_t start, end;
	double cpu_time_used;

	start = clock();

	int i = 10;
	while (i >= 0) {
		printf("빵 먹는중 ..남은 빵개수 : %d\n",i );
		Sleep(100);
		i = i - 1;
		
	}
	printf("빵 다 먹었다\n");
	end = clock();

	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("총 먹는데 걸린 시간 :%f\n", cpu_time_used);
}