#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int i = 1;          

    scanf("%d", &num);

    while (i <= num) {  
        sum += i;       
        i++;            
    }

    printf("%d", sum);
    return 0;
}