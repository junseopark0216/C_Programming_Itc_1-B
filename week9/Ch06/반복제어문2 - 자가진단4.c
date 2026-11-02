#include <stdio.h>

int main() {
    int num;
    int sum=0;
    scanf("%d", &num);
    for (num; num<=100; num++) {
        sum +=num;
    }
    printf("%d", sum);
}