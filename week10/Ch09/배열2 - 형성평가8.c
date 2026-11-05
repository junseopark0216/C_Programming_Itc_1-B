/*
문제


행의 크기를 입력받아 파스칼 삼각형을 작성하여 마지막 행부터 첫 번째 행까지 차례로 출력하는 프로그램을 작성하시오. 단, 행의 크기는 최대 10이다.


예제
입력
6

출력
1 5 10 10 5 1
1 4 6 4 1
1 3 3 1
1 2 1
1 1
1
*/

#include <stdio.h>

int main() {
    int n;
    int a[10][10] = {0};    

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {          
            if (j == 0 || j == i) a[i][j] = 1;  
            else a[i][j] = a[i-1][j-1] + a[i-1][j];  
        }
    }

    // 출력: 아래 → 위 (i를 거꾸로)
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}