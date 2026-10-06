#include <stdio.h>
// 산 모양 별 찍기 

/*
int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 3; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
*/

int main() {
    for (int i = 1; i<= 6; i++) {
        int star;

        if (i <= 4) {
            star = i;
        }
        else {
            star = 7 - i;
        }
        for (int j = 1; j <= star; j++) {
            printf("*");
        }
        printf("\n");
    }
}