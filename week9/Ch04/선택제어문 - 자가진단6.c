#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num<0) {
        printf("Non positive");
    }
    else if (num%2==0) {
        printf("Even Number");
    }
    else if (num%2==1) {
        printf("Odd Number");
    }
}