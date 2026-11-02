#include <stdio.h>

int main() {
    int number;

    while (1) {
        printf("1. Korea\n2. USA\n3. Japan\n4. China\nnumber? ");
        scanf("%d", &number);

        if (number == 1) {
            printf("\nSeoul\n\n");
        }
        else if (number == 2) {
            printf("\nWashington\n\n");
        }
        else if (number == 3) {
            printf("\nTokyo\n\n");
        }
        else if (number == 4) {
            printf("\nBeijing\n\n");
        }
        else {
            printf("\nnone\n");
            break;
        }
    }

    return 0;
}