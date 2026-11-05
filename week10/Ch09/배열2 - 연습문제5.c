
/*
3행 3열의 배열을 선언하고 아래의 출력 예와 같이 초기화한 후 출력하는 프로그램을 작성하시오.
3 5 4
2 6 7
8 10 1
*/
#include <stdio.h>

int main() {
    int a[3][3] = {
        {3, 5, 4},    
        {2, 6, 7},    
        {8, 10, 1}    
    };

    for (int i = 0; i < 3; i++) {    
        for (int j = 0; j < 3; j++) {    
            printf("%d ", a[i][j]);
        }
        printf("\n");    
    }

    return 0;
}