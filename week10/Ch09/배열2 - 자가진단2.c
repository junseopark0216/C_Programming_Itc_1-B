#include <stdio.h>

int main() {
    int cnt[10] = {0};
    int num;

    while (1) {
        scanf("%d", &num);
        if (num==0) {
            break;
        }
        cnt[num/10]++;

    }
    for (int i=0; i<10; i++) {
        if (cnt[i]>0) {
            printf("%d : %d\n", i, cnt[i]);
        }
    }
}