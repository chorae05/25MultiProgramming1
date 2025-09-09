/*
    * 1:1 => 1
   ** 2:2 => 1 2
  *** 3:3 => 1 2 3
 **** 4:4 => 1 2 3 4
***** 5:5 => 1 2 3 4 5
첫 번쨰 ;줄 바꿈, 두 번째; 별의 개수 세 번째 

줄의 개수 {

    띄어쓰기 개수 {
    }
    별 개수 {
    }
}
*/

#include<stdio.h>
int main() {


    int i = 1;
    while (i <= 5) {

        int j = 4-i;
        while (j >= 0) {
            printf(" ");
            j = j - 1;
        }
        int k = 1;
        while (k <= i) {
            printf("*");
            k = k + 1;
        }


        printf("\n");
        i = i + 1; 
    }
}