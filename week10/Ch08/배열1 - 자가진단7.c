#include <stdio.h>

int main() {
    int a[10];
    int sum_d = 0, sum_s = 0, cnt = 0;
    double avg;
    for (int i=0; i<10; i++) {
        scanf("%d", &a[i]);
        if ((i+1)%2==0) {
            sum_d += a[i];
        }
        if ((i+1)%2!=0) {
            sum_s += a[i];
            cnt++;
        }
    }
    avg = (double)sum_s/cnt;
    printf("sum : %d\navg : %.1f", sum_d, avg);

}
