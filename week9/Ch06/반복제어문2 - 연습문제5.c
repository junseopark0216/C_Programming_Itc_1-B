#include <stdio.h>

int main() {
    int num;
    int even=0;
    for (int i=1; i<=10; i++) {
        scanf("%d ", &num);
        if (num%2==0) {
            even++;
        }
    }
    printf("Even numbers = %d", even);

}