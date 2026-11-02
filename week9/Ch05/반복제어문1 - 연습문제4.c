#include <stdio.h>

int main() {
    int num;
    int cnt = 0, sum = 0;

    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;            
        }
        cnt++;                
        sum += num;           
    }

    printf("cnt = %d\n", cnt);
    printf("sum = %d\n", sum);
    printf("avg = %.2f\n", (double)sum / cnt);

    return 0;
}