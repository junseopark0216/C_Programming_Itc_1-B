#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);

    while (score>=0 && score<=100) {
        if (score>=80) {
            printf("Pass\n");
        }
        else {
            printf("Fail\n");
        }
        scanf("%d", &score);
    }
}