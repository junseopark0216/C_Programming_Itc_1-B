#include <stdio.h>
// 거꾸로 별 찍기

int main() {
    int n;
    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}