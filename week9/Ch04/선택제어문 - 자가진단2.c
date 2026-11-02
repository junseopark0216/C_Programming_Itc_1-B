#include <stdio.h>

int main() {
    int h, w, n;
    
    scanf("%d %d", &h, &w);

    n = w + 100 - h;

    if (n < 0) {
        printf("%d", n);
    }
    
    else {
        printf("%d\nObesity\nNeed control", n);
    }

}