#include <stdio.h>

int main() {
    double a[6];
    double sum = 0, avg = 0;
    for (int i=0; i<6; i++) {
        scanf("%lf", &a[i]);
        sum += a[i];
    }
    avg = sum/6;

    printf("%.1f", avg);
}