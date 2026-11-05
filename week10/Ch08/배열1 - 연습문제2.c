#include <stdio.h>

int main() {
    char a[26];
    for (int i = 0; i < 26; i++) {
        a[i] = 'A' + i;    
    }

    for (int i = 25; i >= 0; i--) {    
        printf("%c ", a[i]);    
    }

    return 0;
}