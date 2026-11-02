#include <stdio.h>

int main() {
    int num;
    int sum=0;
    double avg;
    scanf("%d", &num);
    for (int i=0;i<num;i++) {
        int score;
        scanf("%d", &score);
        sum+=score;
    }
    avg = (double)sum/num;
    printf("%.2f", avg);
}