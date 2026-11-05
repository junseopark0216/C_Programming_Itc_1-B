#include <stdio.h>

int main() {
    int a[100], max, min;
    for (int i=0; i<100; i++) {
        scanf("%d", &a[i]);
        if (a[i]==0) {
            break;
        }
        if (i==0) {
            min = a[0], max = a[0];
        }
        if (min>a[i]) {
            min = a[i];
        }
        if (max<a[i]) {
            max = a[i];
        }
    }
    printf("%d", max+min);
}