#include <stdio.h>

int main() {
    int length, height;
    double area;
    char yn;
    while(1) {
        scanf("%d %d", &length, &height);
        area = (double)length*(double)height/2;
        printf("Triangle area = %.1f\n", area);
        printf("Continue? ");
        scanf(" %c", &yn);
        if (yn=='y' || yn=='Y') {
            continue;
        }
        else {
            break;
        }
    }
}