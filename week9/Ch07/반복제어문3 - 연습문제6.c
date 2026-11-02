#include <stdio.h>

int main() {
    char ch = 'a';   
    int num = 1;     

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {       
            printf("%c ", ch);
            ch++;
        }
        for (int j = 1; j <= 5 - i; j++) {   
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}