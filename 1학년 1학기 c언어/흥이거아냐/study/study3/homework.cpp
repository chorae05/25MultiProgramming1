/*
    *
   ***
  *****
 *******
********* 


���� �ʹ� ���� �ߴ�
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
            while (j >= i) { //���� �� ����ŭ ���鸦 ����϶�
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

