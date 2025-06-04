/*
    *
   ***
  *****
 *******
********* 


만약 너무 빨리 했다
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

 */
#include<stdio.h>
int main() {
    int i = 1;
    while (i <= 5) {

            int j = 5;
            while (j >= i) { //현재 줄 수만큼 공백를 출력하라
                printf(" ");
                j = j -1 ;
            }

            int k = 1;
            while (k <= (2 * i - 1)) {
                printf("*");
                k = k + 1;
            }

          
    
    printf("\n");
    i = i + 1;
        }
}

