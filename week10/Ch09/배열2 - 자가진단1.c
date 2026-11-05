#include <stdio.h>

int main() {
    int cnt[26] = {0};    
    char large;
    while (1) {
        scanf(" %c", &large);    
        if (large > 'Z' || large < 'A') {    
            break;
        }
        cnt[large - 'A']++;    // A→0, B→1, ..., Z→25
    }
    for (int i = 0; i < 26; i++) {   
        if (cnt[i] > 0) {
            printf("%c : %d\n", i + 'A', cnt[i]);    
        }
    }

    return 0;
}