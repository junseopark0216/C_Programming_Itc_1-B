#include <stdio.h>

int main() {
    int num;

    while (1) {
        printf("1. Input\n2. Output\n3. Delete\n4. Finish\nEnter number: ");
        scanf("%d", &num);

        if (num == 1) {
            printf("\nYou selected Input.\n\n");
        }
        else if (num == 2) {
            printf("\nYou selected Output.\n\n");
        }
        else if (num == 3) {
            printf("\nYou selected Delete.\n\n");
        }
        else if (num == 4) {
            printf("\nYou selected Finish.\n");
            break;                       
        }
        else {
            printf("\nWrong input.\n\n"); 
        }
    }

    return 0;
}