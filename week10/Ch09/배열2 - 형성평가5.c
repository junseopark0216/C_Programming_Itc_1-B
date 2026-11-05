/*
문제

호석이네 학교는 6학년에 네 반이 있는데 각 반의 대표를 세 명씩 선발하여 제기차기 시합을 하였다.
반별로 세 명이 제기를 찬 개수를 입력받아 각 반별로 제기를 찬 개수의 합계를 출력하고 마지막줄에 모든 학생들의 제기 찬 합계를 출력하는 프로그램을 작성하시오.


예제
입력
15 2 35
33 1 6
5 10 19
1 8 55

출력
52
40
34
64
190
*/
#include <stdio.h>

int main() {
    int a[4][3];
    int total = 0;    

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 4; i++) {      
        int sum = 0;                   
        for (int j = 0; j < 3; j++) {
            sum += a[i][j];
        }
        printf("%d\n", sum);           
        total += sum;                  
    }
    printf("%d\n", total);             

    return 0;
}