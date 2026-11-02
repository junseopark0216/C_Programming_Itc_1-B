#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if (num1>=4 && num2>=4) {
        printf("WIN.");
    }
    else if (num1>=4 || num2>=4) {
        printf("DRAW.");
    }
    else {
        printf("LOSE.");
    }
}