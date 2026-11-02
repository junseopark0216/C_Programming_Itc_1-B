#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int sum=0;

    for (int i=0; i<num; i++) {
        int score;
        scanf("%d", &score);
        
        sum+=score;
    }
    double avg = (double)sum/num;
    printf("avg : %.1f\n", avg);
    if (avg>=80) {
        printf("pass");
    }
    else {
        printf("fail");
    }
}