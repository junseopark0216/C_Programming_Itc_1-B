#include <stdio.h>

int main() {
    double num;
    scanf("%lf", &num);

    if (num>=4) {
        printf("scholarship");
    }
    else if (num>=3) {
        printf("next semester");
    }
    else if (num>=2) {
        printf("seasonal semester");
    }
    else if (num<2) {
        printf("retake");
    }
}