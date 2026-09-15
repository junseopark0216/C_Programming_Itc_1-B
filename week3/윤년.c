#include <stdio.h>
// 윤년 계산하기 실습 코드입니다. 한글이 깨져, 임의로 영문 작성 하였습니다.


int main()  {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    
    if ((year%4==0 && year%400 !=0)||year%400==0) {
        printf("leap year");
    }

    else {
        printf("it's not leap year");
    }

}