#include <stdio.h>

int main() {
    int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int month;
    while (1) {
        scanf("%d", &month);
        if (month>12 || month<1) {
            break;
        }
        printf("%d\n",arr[month-1]);
    }
}