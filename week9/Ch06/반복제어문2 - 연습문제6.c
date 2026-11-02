#include <stdio.h>

int main() {
    int score;
    int sum=0;
    for (int i=0; i<5; i++) {
        scanf("%d", &score);
        sum += score;
    }
    double avg = (double)sum/5;
    printf("sum : %d\n", sum);
    printf("avg : %.1f", avg);
    
}