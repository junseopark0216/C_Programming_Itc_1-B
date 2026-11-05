/*
문제

4행 2열의 배열을 입력받아 첫 번째 줄에는 가로 평균, 두 번째 줄에는 세로 평균 그리고 세 번째 줄에는 전체평균을 출력하는 프로그램을 작성하시오. (소수점 이하는 버림한다.)

예제
입력
16 27
39 100
19 88
61 20

출력
21 69 53 40
33 58
46
*/

#include <stdio.h>

int main() {
    int a[4][2];
    int total = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // 가로 평균: 행 고정, 열을 움직임
    for (int i = 0; i < 4; i++) {
        int sum = 0;                  
        for (int j = 0; j < 2; j++) {
            sum += a[i][j];
        }
        printf("%d ", sum / 2);       
    }
    printf("\n");

    // 세로 평균: 열 고정, 행을 움직임 
    for (int j = 0; j < 2; j++) {
        int sum = 0;                  
        for (int i = 0; i < 4; i++) {
            sum += a[i][j];
        }
        printf("%d ", sum / 4);
    }
    printf("\n");

    // 전체 평균
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            total += a[i][j];
        }
    }
    printf("%d\n", total / 8);

    return 0;
}