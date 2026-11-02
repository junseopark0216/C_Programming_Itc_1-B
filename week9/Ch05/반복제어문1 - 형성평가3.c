#include <stdio.h>

int main() {
    int num;
    int sum = 0, cnt = 0;
    double avg;

    while (1) {
        scanf("%d", &num);
        if (num < 0 || num > 100) {
            break;
        }
        cnt++;
        sum += num;
    }

    avg = (double)sum / cnt;
    printf("sum : %d\navg : %.1f\n", sum, avg);

    return 0;
}