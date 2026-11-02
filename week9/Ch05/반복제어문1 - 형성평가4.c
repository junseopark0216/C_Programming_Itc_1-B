#include <stdio.h>

int main() {
    int num;
    int cnt = 0;

    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        if (num % 3 != 0 && num % 5 != 0) {
            cnt++;
        }
    }

    printf("%d\n", cnt);
    return 0;
}