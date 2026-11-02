#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for (int j = 1; j <= 9; j++) {
        if (a <= b) {
            for (int i = a; i <= b; i++) {
                printf("%d * %d = %2d   ", i, j, i * j);
            }
        }
        else {
            for (int i = a; i >= b; i--) {
                printf("%d * %d = %2d   ", i, j, i * j);
            }
        }
        printf("\n");
    }

    return 0;
}