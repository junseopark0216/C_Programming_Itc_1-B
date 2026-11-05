#include <stdio.h>

int main() {
    int a[100], sum = 0;
    int cnt = 0;
    double avg;
    for (int i=0; i<100; i++) {
        scanf("%d", &a[i]);
        if (a[i]==0) {
            break;
        }
        if (a[i]%5==0) {
            sum += a[i];
            cnt++;
        }
        
    }
    avg = (double)sum/cnt;
    
    printf("Multiples of 5 : %d\nsum : %d\navg : %.1f", cnt, sum, avg);
}