#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    while (num!=0) {
        if (num>0) {
            printf("positive number\n");
        }
        else {
            printf("negative number\n");
        }
        scanf("%d", &num);
    }
}