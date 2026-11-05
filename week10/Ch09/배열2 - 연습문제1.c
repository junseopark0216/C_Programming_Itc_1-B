#include <stdio.h>

int main() {
    int cnt[11] = {0};    
    int num;

    while (1) {    
        scanf("%d", &num);
        if (num < 1 || num > 10) {    
            break;
        }
        cnt[num]++;    
    }

    for (int i = 1; i <= 10; i++) {    
        if (cnt[i] > 0) {    
            printf("%d : %d\n", i, cnt[i]);
        }
    }

    return 0;
}