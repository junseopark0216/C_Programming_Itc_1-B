#include <stdio.h>

int main() {
    int a[5];
    for (int i=0; i<5; i++) {
        scanf("%d", &a[i]);
    }
    int sum = a[0]+a[2]+a[4];
    printf("%d", sum);
}