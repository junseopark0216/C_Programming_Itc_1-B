#include <stdio.h>

int main() {
    int a[10];
    int odd = 0, even = 0;
    for (int i=0; i<10; i++) {
        scanf("%d", &a[i]);
        if ((i+1)%2==0) {
            even += a[i];
        }
        if ((i+1)%2!=0) {
            odd += a[i];
        }
    }
    printf("odd : %d\neven : %d", odd, even);
    
}