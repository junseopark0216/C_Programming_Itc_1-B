#include <stdio.h>

int main() {
    int arr[10];
    for (int i=0; i<10; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    double avg = 0;
    for (int i=0; i<10; i++) {
        sum = sum +arr[i];
    }
    avg = sum/10;
    printf("sum = %d\navg = %.1f", sum, avg);
}