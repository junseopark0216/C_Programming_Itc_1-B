#include <stdio.h>

int main() {
    int even=0, odd=0;
    for (int i=0;i<10;i++) {
        int num;
        scanf("%d", &num);
        if (num%2==0) {
            even++;
        }
        if (num%2!=0) {
            odd++;
        }
    }
    printf("even : %d\n", even);
    printf("odd : %d", odd);
}