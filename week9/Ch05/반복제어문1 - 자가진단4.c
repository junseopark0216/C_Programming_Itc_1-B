#include <stdio.h>

int main() {
    int num;
    int count_small = 0, count_large = 0;

    while (1) {
        scanf("%d", &num);
        if (num >= 100) {         
            count_large++;        
            break;
        }
        else if (num < 50) {
            count_small++;
        }
        else {                    
            count_large++;
        }
    }

    printf("small : %d\n", count_small);
    printf("large : %d\n", count_large);

    return 0;
}