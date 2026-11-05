/*
문제
5명 학생의 4과목 점수를 입력 받아 각 학생의 총점과 평균을 출력하는 프로그램을 작성하시오.
(평균은 반올림하여 소수 첫째자리까지 출력한다.)


예제
입력
85 67 95 65 
80 95 86 56
100 98 67 86
95 76 84 65
67 86 90 76

출력
312 78.0
317 79.3
351 87.8
320 80.0
319 79.8
*/
#include <stdio.h>

int main() {
    int a[5][4];    
    int sum[5];    
    double avg[5];    

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        sum[i] = a[i][0] + a[i][1] + a[i][2] + a[i][3];
        avg[i] = (double)sum[i] / 4;    
    }

    for (int i = 0; i < 5; i++) {
        printf("%d %.1f\n", sum[i], (int)(avg[i] * 10 + 0.5) / 10.0); 
    }

    return 0;
}
