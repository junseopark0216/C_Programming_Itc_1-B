/*
문제


2차원 배열을 선언하고 1행의 1열과 3열, 5열을 각각 1로 나머지는 모두 0으로 초기화한 후 2행부터는 바로 위행의 왼쪽과 오른쪽의 값을 더하여 채운 후 출력하는 프로그램을 작성하시오.


예제
출력
1 0 1 0 1
0 2 0 2 0
2 0 4 0 2
0 6 0 6 0
6 0 12 0 6
*/

#include <stdio.h>

int main() {
    int a[5][5] = { 
        {1, 0, 1, 0, 1} 
    };
    
    for (int i=1; i<5; i++) {
        for (int j=0; j<5; j++) {
            int left = 0, right = 0;
            if (j>0) left = a[i-1][j-1];
            if (j<4) right = a[i-1][j+1];
            a[i][j] = left + right;
        }
    }
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

}