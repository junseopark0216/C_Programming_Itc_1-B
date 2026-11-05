#include <stdio.h>

int main() {
    double score[] = {85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int c1, c2;
    double sum;
    scanf("%d %d", &c1, &c2);
    sum = score[c1-1] + score[c2-1];

    printf("%.1f", sum);
}