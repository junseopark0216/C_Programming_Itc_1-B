#include <stdio.h>
#include <string.h>    // strlen, strcpy, strncpy가 선언된 헤더

int main()
{
    char str1[20] = "Back";
    char str2[20] = "Space";
    char str3[20];    // 복사 결과를 담을 배열 (크기 여유 있게)
    char ch = 'p';
    int n = 3;

    int len = strlen(str1);    // 널 문자 '\0'은 길이에 포함되지 않음 → 4
    printf("str1의 길이: %d\n", len);

    strcpy(str3, str1);    // 널 문자까지 함께 복사됨
    printf("str1을 str3에 복사: %s\n", str3);

    strncpy(str3, str2, n);    // n개만 복사 → 널 문자는 자동으로 붙지 않음
    str3[n] = '\0';    // 직접 널 문자를 넣어야 문자열이 n개에서 끝남
    printf("str2의 첫 %d 문자를 str3에 복사: %s\n", n, str3);

    return 0;
}
