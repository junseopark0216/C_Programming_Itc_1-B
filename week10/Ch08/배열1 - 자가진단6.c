#include <stdio.h>

int main() {
    int a[100], max, min;
   
    for (int i=0; i<100; i++) {
        scanf("%d", &a[i]);
        if (i == 0) {
            max = min = a[0];    
        }
        if (a[i]==0) {
            break;
        }
        if (max<a[i]) {
            max = a[i];
        }
        if (min>a[i]) {
            min = a[i];
        }
    }
    printf("%d", max-min);

}