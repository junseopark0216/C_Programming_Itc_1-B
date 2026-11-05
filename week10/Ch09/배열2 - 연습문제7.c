/*
문제


아래와 같은 파스칼 삼각형을 출력하는 프로그램을 작성하시오. 파스칼 삼각형은 첫 번째 줄 첫 번째 행을 1로 초기화한 후 다음 줄부터는 바로 위의 값과 바로 위 왼쪽의 값을 더한 값이 된다.


예제
출력
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/

#include <stdio.h>

int main() {
    int a[5][5] = {0};

    for (int i = 0; i < 5; i++) {    
        for (int j = 0; j <= i; j++) {    
            if (j == 0 || j == i) {
                a[i][j] = 1;   
            }
            else {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {   
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}