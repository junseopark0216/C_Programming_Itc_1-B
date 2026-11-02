#include <stdio.h>

int main() {
    int n1, n2, min, max;
    int sum = 0, cnt = 0;
    double avg;

    scanf("%d %d", &n1, &n2);

    if (n1 < n2) {
        min = n1;
        max = n2;
    }
    else {
        min = n2;
        max = n1;
    }

    for (int i = min; i <= max; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
            cnt++;
        }
    }

    avg = (double)sum / cnt;
    printf("sum : %d\navg : %.1f\n", sum, avg);

    return 0;
}