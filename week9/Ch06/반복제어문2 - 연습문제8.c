#include <stdio.h>

int main() {
    for (int j = 1; j <= 9; j++) {
        for (int i = 2; i <= 4; i++) {
            printf("%d * %d = %2d   ", i, j, i * j);
        }
        printf("\n");
    }
}