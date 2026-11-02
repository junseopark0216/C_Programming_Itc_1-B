#include <stdio.h>

int main() {
    int n1, n2;
    int min, max;
    scanf("%d %d", &n1, &n2);

    if (n1 < n2) {
        min = n1;
        max = n2;
    }
    else {
        min = n2;
        max = n1;
    }

    for (int i = min; i <= max; i++) {
        printf("%d ", i);
    }

    return 0;
}