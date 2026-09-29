#include <stdio.h>
#include <string.h>
//[정올] 1430_숫자의 개수

int main() {
    long num[3];
    for (int i = 0; i < 3; i++) {
        scanf("%ld", &num[i]);
    }

    long mul = num[0] * num[1] * num[2];


    char str[20];
    sprintf(str, "%ld", mul); //sprintf 이용하여 문자열로 저장.


    int count[10] = {0};
    for (int i = 0; i < strlen(str); i++) {
        int digit = str[i] - '0';  //아스키코드 이용. 문자 0은 48. 문자 3은 51.
        count[digit]++;
    }


    for (int i = 0; i < 10; i++) {
        printf("%d\n", count[i]);
    }

    return 0;
}

/*
int main() {
    int result;
    int count[10] = {0};
    int A, B, C; 
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    result = A * B * C;

    while (result >0) {
        count[result % 10] ++;
        result /= 10;
    }

    for (int i =0; i < 10; i++) {
        printf("%d\n", count[i]);
    }

    return 0;
}
*/