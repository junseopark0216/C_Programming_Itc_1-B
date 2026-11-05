/*
문제
배열을 만들어서 반복문을 이용하여 아래와 같이 저장한 후 출력하는 프로그램을 작성하시오.

예제
출력
1 1 1 1 1
1 2 3 4 5
1 3 6 10 15
1 4 10 20 35
1 5 15 35 70
*/

#include <stdio.h>

int main() {
    int a[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 || j == 0) {
                a[i][j] = 1;   
            }
            else {
                a[i][j] = a[i - 1][j] + a[i][j - 1];    // 바로 위 + 바로 왼쪽
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}