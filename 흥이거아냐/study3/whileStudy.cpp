/*
    * 1:1 => 1
   ** 2:2 => 1 2
  *** 3:3 => 1 2 3
 **** 4:4 => 1 2 3 4
***** 5:5 => 1 2 3 4 5
ù ���� ;�� �ٲ�, �� ��°; ���� ���� �� ��° 

���� ���� {

    ���� ���� {
    }
    �� ���� {
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