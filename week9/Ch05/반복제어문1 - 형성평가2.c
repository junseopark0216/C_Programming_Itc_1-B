#include <stdio.h>

int main() {
    int num;
    int odd=0, even=0;
    while (1) {
        scanf("%d", &num);
        if (num==0) {
            break;
        }
        else if (num%2==0) {
            even++;
        }
        else if (num%2!=0) {
            odd++;
        }
    }
    printf("odd : %d\neven : %d", odd, even);
}