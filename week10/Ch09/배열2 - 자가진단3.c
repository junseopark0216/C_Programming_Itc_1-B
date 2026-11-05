#include <stdio.h>

int main() {
    int num;
    int cnt = 0;
    int a[100];
    a[0] = 100;
    scanf("%d", &num);
    a[1] = num;
    for (int i=2; i<100; i++) {
        a[i] = a[i-2] - a[i-1];
        cnt++;
        if (a[i]<0) {
            break;
        }
    }
    for (int i = 0; i < cnt + 2; i++) {    
    printf("%d ", a[i]);
}

}

