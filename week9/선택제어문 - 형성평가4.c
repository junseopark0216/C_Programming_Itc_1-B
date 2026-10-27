#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num==1) {
        printf("dog");
    }
    else if (num==2) {
        printf("cat");
    }
    else if (num==3) {
        printf("chick");
    }
    else {
        printf("blank");
    }
}