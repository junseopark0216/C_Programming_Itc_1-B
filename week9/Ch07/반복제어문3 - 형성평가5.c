#include <stdio.h>

int main() {
    int n;
    int num = 0;
    char ch = 'A';
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            printf("%c ", ch);
            ch++;
        }
        for (int j = 1; j <= i - 1; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}