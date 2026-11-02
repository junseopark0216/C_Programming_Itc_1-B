#include <stdio.h>

int main() {
    int num;
    char ch = 'A';          
    scanf("%d", &num);

    for (int i = num; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {  
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}