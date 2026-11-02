#include <stdio.h>

int main() {
    int y, n;
    scanf("%d %d", &y, &n);

    for (int i = 1; i <= y; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}