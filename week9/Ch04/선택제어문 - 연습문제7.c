#include <stdio.h>

int main() {
    printf("1. ADD\n2. EDIT\n3. DEL\n");
    int num;
    scanf("%d", &num);

    if (num == 1) {
        printf("You selected ADD.");
    }

    if (num == 2) {
        printf("You selected EDIT.");
    }

    if (num == 3) {
        printf("You selected DEL.");
    }

    else if (num>3 || num<0) {
        printf("Wrong choice.");
    }
}